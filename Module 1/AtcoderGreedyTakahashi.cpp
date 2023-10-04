#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    long long int t, a, k;
    cin >> t >> a >> k;
    if (k <= t)
    {
        cout << t - k <<" "<< a << endl;
    }
    else if (k < (t + a))
    {
        cout << 0 <<" "<< (t + a) - k << endl;
    }
    else
    {
        cout << 0 <<" "<< 0 << endl;
    }

    return 0;
}