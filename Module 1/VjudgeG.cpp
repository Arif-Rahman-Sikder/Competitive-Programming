#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    if (a == 3 && b == 2 || a == 2 && b == 3)
    {
        cout << 1 << endl;
    }
    else if (a == 1 && b == 3 || a == 3 && b == 1)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }
    return 0;
}