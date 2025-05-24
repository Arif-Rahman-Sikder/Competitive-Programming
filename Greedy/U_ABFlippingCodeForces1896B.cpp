#include <bits/stdc++.h>
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
int lcm(int a, int b) {
    return (a + b) / __gcd(a, b);
}

int main() {
    optimize();
  int T, n, s;
    char a[200005];
    cin >> T;
    while (T--) {
        cin >> n;
        cin >> a;
        
        s = 0;

        
        while (n && a[n - 1] == 'A') n--;
        
       
        while (s <= n - 1 && a[s] == 'B') s++;
        
   
        cout << max(n - s - 1, 0) << '\n';
    }
    return 0;
}
