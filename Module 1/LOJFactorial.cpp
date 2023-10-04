#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long int fact = 1;
        for (int i = n; i >= 2; i--)
        {
            fact = fact * i;
        }

        cout << fact << endl;
    }
    return 0;
}