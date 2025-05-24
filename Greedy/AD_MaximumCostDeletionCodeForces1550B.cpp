

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
        int n, a, b;
        cin >> n >> a >> b;

        char s[105];
        cin >> s;

        if (b >= 0) {
            cout << (a + b) * n << endl;
        } else {
            int g = 1;
            for (int i = 1; i < n; i++) {
                if (s[i] != s[i - 1]) {
                    g++;
                }
            }
            int min_g = (g / 2) + 1;
            cout << (a * n + b * min_g) << endl;
        }
    }
    

    return 0;
}