#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
   long double Tballs = 300;

    while (t--)
    {
        long double trun, brun, bleft;
        cin >> trun >> brun >> bleft;

        long double Oleft = (Tballs - bleft) / 6;
        long double Rrrate = ((trun - brun + 1) / bleft) * 6;
        long double RR = (brun / Oleft);
        cout << fixed << setprecision(2) << RR << " " << Rrrate <<" "<< endl;
    }

    return 0;
}
