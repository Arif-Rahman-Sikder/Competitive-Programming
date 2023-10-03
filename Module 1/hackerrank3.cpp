#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
#define ll long long
int main()
{
    ll int a, b, c;
    cin >> a >> b >> c;
    ll int eqn = ((pow(a, 4) + 3 * a * c) * (pow(a, 4) + 3 * a * c)) + (4 * pow(b, 2) * c) + pow(c, 2);
    cout << eqn << endl;
    return 0;
}