#include <bits/stdc++.h>
// [-(~TheHonestGuy~)-]
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

int main()
{
    optimize();
    char s[123];
    int cnt = 0;
    cin >> s;
    for (int i = 0; s[i] != 0; i++)
    {

        cnt++;
        cout << cnt << " " << s[i] << endl;
    }
    cout << endl;
    cout << s << " " << cnt << endl;

    return 0;
}
