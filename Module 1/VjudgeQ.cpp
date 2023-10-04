#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    int a, b;
    char c;

    while (cin >> a && cin >> c && cin >> b)
    {
        
        if (c == '+')
        {
            cout << a + b << endl;
        }
        else if (c == '-')
        {
            cout << a - b << endl;
        }
        else if (c == '*')
        {
            cout << a * b << endl;
        }
        else if (c == '/')
        {
            cout << a / b << endl;
        }
        else if (c == '?')
        {
            break;
        }
    }
    return 0;
}