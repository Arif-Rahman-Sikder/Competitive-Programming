#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    int x = (n * m);
    n -= 1;
    int cnt = 0, reqm;
    bool flag = false;
    while (n--)
    {
        int a;
        cin >> a;
        cnt += a;
        reqm = (x - cnt);
        if (reqm <= k)
        {
            flag = true;
        }

        else
        {
            flag = false;
        }
    }
    if (flag)
    {
        if (reqm < 0)
            cout << 0 << endl;
        else
            cout << reqm << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
