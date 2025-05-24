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
        ll n, k;
        cin >> n >> k;

        ll total = 0, mx = 0;

        for (int i = 0; i < k; i++) {
            ll x;
            cin >> x;
            mx = max(mx, x);
            total += (2 * x - 1);
        }

        total -= (2 * mx - 1);
        cout << total << endl;
    }

    return 0;
}
