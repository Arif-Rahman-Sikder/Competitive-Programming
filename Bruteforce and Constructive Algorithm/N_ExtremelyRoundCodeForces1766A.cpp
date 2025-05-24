#include <bits/stdc++.h>
// [-(~TheHonestGuy~)-]
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))

int ceil(int a, int b) {
    return (a + b - 1) / b;
}
int lcm(int a, int b) {
    return (a + b) / __gcd(a,b);
}

int main() {
    optimize();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int cnt = 0;
        for (long long power = 1; power <= n; power *= 10) {
            for (int digit = 1; digit <= 9; digit++) {
                long long num = digit * power;
                if (num <= n) {
                    cnt++;
                } else {
                    break;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}