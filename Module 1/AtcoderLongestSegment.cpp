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
#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
const int mx = 150;
int x[mx], y[mx];

int main()
{
    optimize();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    dl maxdistance = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x1 = x[i];
            int y1 = y[i];
            int x2 = x[j];
            int y2 = y[j];
         dl distance = sqrt(sqr(x1 - x2) + sqr(y1 - y2));

            if (distance > maxdistance)
            {
                maxdistance = distance;
            }
        }
    }
    fraction();
    cout << maxdistance << endl;
    return 0;
}