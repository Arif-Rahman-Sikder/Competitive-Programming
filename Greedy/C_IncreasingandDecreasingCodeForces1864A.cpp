#include <bits/stdc++.h>
// [-(~TheHonestGuy~)-]
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction()  cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset (a, b, sizeof(a))
#define sqr(a) ((a) * (a))

int ceil(int a, int b) {
    return (a + b - 1) / b;
}
int lcm (int a, int b){
    return (a + b) / __gcd(a,b);
}

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        int a[1005];
        
        a[0] = x;
        a[n-1] = y;

        int total_diff = y - x;
        int num_diffs = n - 1;
        
       
        int b[1005];
        int sum = 0;
        for (int i = 1; i <= num_diffs; i++) {
            b[num_diffs-i] = i; // b_{n-1} = 1, b_{n-2} = 2, ..., b_1 = n-1
            sum += i;
        }
        
        if (sum > total_diff) {
            cout << -1 << endl;
            continue;
        }
        
        
        int remaining = total_diff - sum;
        int increase = remaining / num_diffs;
        int extra = remaining % num_diffs;
        
        for (int i = 0; i < num_diffs; i++) {
            b[i] += increase;
            if (i < extra) b[i]++;
        }

        for (int i = 1; i < n-1; i++) {
            a[i] = a[i-1] + b[i-1];
        }
        
      
        int valid = 1;
  
        for (int i = 1; i < n; i++) {
            if (a[i] <= a[i-1]) {
                valid = 0;
                break;
            }
        }
     
        for (int i = 1; i < num_diffs; i++) {
            if (b[i] >= b[i-1]) {
                valid = 0;
                break;
            }
        }
 
        if (a[n-1] != y) valid = 0;
        
        if (valid) {
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}