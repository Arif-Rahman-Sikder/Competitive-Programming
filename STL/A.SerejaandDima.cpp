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

int main()
{
    optimize();

    int t;
    cin >> t;
    vector<int> v(t);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int Sereja = 0, Dima = 0, Turn = 1;
    while (!v.empty())
    {
        if (Turn == 1)
        {
            if (*v.begin() > v.back())
            {
                Sereja += *v.begin();
                v.erase(v.begin());
            }
            else
            {
                Sereja += v.back();
                v.pop_back();
            }
            Turn = 2;
        }
        else
        {
            if (*v.begin() > v.back())
            {
                Dima += *v.begin();
                v.erase(v.begin());
            }
            else
            {
                Dima += v.back();
                v.pop_back();
            }
            Turn = 1;
        }
    }
    cout << Sereja << " " << Dima << endl;
    return 0;
}