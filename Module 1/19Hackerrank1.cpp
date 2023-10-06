// #include <bits/stdc++.h>
// //[-(~TheHonestGuy~)-]
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int a;
//         cin >> a;
//         int divide = (a / 2);

//         if (divide & 1)
//         {
//             cout << "Case " << i << ": "
//                  << "NO" << endl;
//         }
//         else
//             cout << "Case " << i << ": "
//                  << "YES" << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int n;
        cin >> n;

        bool isPerfectSquare = false;
        for (int i = 1; i*i <= n; i++)
        {
            if (i * i == n)
            {
                isPerfectSquare = true;
                break;
            }
        }

        if (isPerfectSquare)
        {
            cout << "Case " << i << ": YES" << endl;
        }
        else
        {
            cout << "Case " << i << ": NO" << endl;
        }
    }

    return 0;
}
