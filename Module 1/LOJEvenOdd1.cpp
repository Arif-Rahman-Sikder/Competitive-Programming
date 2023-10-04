#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      long long  int n;
        cin >> n;
        if (n & 1)
        {
            cout << "odd" << endl;
        }
        else if (n == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "even" << endl;
        }
    }
    return 0;
}