#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    int a, b;
    while (cin >> a && cin >> b && a != 0 && b != 0)
    {

        for (int j = 0; j < b; j++)
        {
            cout << "#";
        }
        cout << endl;
        for (int i = 1; i < a - 1; i++)
        {
            cout << "#";
            for (int j = 1; j < b - 1; j++)
            {
                cout << ".";
            }

            cout << "#" << endl;
        }
        for (int j = 0; j < b; j++)
        {
            cout << "#";
        }
        cout << endl
             << endl;
    }
    return 0;
}