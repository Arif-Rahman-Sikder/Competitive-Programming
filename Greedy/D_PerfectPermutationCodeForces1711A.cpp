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
         int n;
        cin >> n;

        int ans[100005];  


        for (int i = 1; i <= n; i++) {
            ans[i] = i;
        }

        for (int i = 1; i < n; i += 2) {
            int temp = ans[i];
            ans[i] = ans[i + 1];
            ans[i + 1] = temp;
        }

        
        if (n > 1 && n % 2 != 1) {
            int temp = ans[n - 1];
            ans[n - 1] = ans[n];
            ans[n] = temp;
        }

        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    

    return 0;
}