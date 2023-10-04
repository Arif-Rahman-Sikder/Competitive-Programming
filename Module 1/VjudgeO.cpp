#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cout << "Case " << i << ": " << (a + b) << endl;
        i++;
    }
    return 0;
}