#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    int a, b;
    while (cin >> a && cin >> b && a != 0 && b != 0)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        cout<<endl;
    }
    return 0;
}