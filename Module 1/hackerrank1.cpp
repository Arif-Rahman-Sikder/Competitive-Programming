#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
#define ll long long
int main()
{
    ll int a, b;
    cin >> a >> b;
    ll sum = a + b;
    ll sub = a - b;
    ll mul = a * b;

    cout << a << " + " << b << " = " << sum << endl;
    cout << a << " - " << b << " = " << sub << endl;
    cout << a << " x " << b << " = " << mul << endl;

    return 0;
}