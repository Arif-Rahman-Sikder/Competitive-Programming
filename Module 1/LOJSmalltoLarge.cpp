#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    int t;
    cin >> t;

    int i = 1;
    while (t--)
    {

        int a, b, c, x, y, z;
        cin >> a >> b >> c;
        if (a < b && a < c)
        {
            x = a;
            y = b;
            z = c;
        }
        else if (b < c && b < a)
        {
            x = b;
            y = a;
            z = c;
        }
        else if (c < b && c < a)
        {
            x = c;
            y = a;
            z = b;
        }
        if (y > z)
        {
            swap(y, z);
        }
        cout << "Case " << i << ": " << x << " " << y << " " << z << " " << endl;
        i++;
    }
    return 0;
}