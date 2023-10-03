#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
#define pi 3.14159265358979323846
int main()
{
  
    double r;
    cin >> r;
    double area = pi * r * r;
    double circumference = 2 * pi * r;
    
    cout<<fixed << setprecision(6) << area << " " << circumference;
    return 0;
}