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

int main() {
    optimize();

    int t;
    cin >> t;

    while (t--) {
        char ch[110];
        cin >> ch;

        int chLength = strlen(ch);

        if (chLength <= 10) {
            cout << ch << endl;
        } else {
           
            cout << ch[0] << chLength - 2 << ch[chLength - 1] << endl;
        }
    }

    return 0;
}
