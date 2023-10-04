#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    int t;
    cin >> t;

    int x = 20, y=0;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= x)
        {
            y = n/2;
            cout << y << " " << n-y << endl;
        }
        else
        {
            cout << y << " " << n << endl;
        }
    }
    return 0;
}