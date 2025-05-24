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
        int res[505];
        char ch[505][5];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> ch[i][j];
            }
            for (int j = 0; j < 4; j++) {
                if (ch[i][j] == '#') {
                    res[i] = j + 1;
                    break;
                }
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
