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
        int lastdigit = (n % 10);
        int first2 = n / 100;
        int first = first2 / 100;
        cout << "Sum = " << (lastdigit + first) << endl;
    }
    return 0;
}