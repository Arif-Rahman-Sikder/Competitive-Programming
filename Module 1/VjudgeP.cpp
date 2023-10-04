#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    int a, b, temp = 0;

    while (cin >> a && cin >> b && (a > 0) || (b > 0))
    {

        if (b < a)
        {
            swap(a, b);
        }
        cout << a << " " << b << endl;
    }
    return 0;
}