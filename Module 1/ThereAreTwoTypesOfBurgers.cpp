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
   
    ll numTestCases, numBuns, numPatties, numCutlet, priceHamburger, priceChicken;

    cin >> numTestCases;

    while (numTestCases--)
    {
        ll maxProfit = 0;
        cin >> numBuns >> numPatties >> numCutlet;
        cin >> priceHamburger >> priceChicken;

        if (numBuns == 1)
        {
            maxProfit = 0;
        }
        else
        {
            ll maxBurgers = numBuns / 2;

            if (priceHamburger >= priceChicken)
            {
                maxProfit = min(numPatties, maxBurgers) * priceHamburger;
                maxBurgers -= min(numPatties, maxBurgers);
                maxProfit += min(numCutlet, maxBurgers) * priceChicken;
            }
            else
            {
                maxProfit = min(numCutlet, maxBurgers) * priceChicken;
                maxBurgers -= min(numCutlet, maxBurgers);
                maxProfit += min(numPatties, maxBurgers) * priceHamburger;
            }
        }
        cout << maxProfit << endl;
    }

    return 0;
}

