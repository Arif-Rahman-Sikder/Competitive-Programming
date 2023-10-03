#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    int abc;
    cin >> abc;
    int c = (abc % 10); // 3
    abc /= 10;
    int b = (abc % 10); // 2
    int a = abc /= 10;  // 1

    abc = 0;
    abc = abc + a; // 1
    abc *= 10;     // 10
    abc = abc + b; // 12
    abc *= 10;     // 120
    abc = abc + c; // 123

    int bca = 0;
    bca = bca + b;  // 2
    bca *= 10;      // 20
    bca = bca + c;  // 23
    bca = bca * 10; // 230
    bca = bca + a;  // 231

    int cab = 0;
    cab = cab + c; // 3
    cab *= 10;     // 30
    cab = cab + a; // 31
    cab *= 10;     // 310
    cab = cab + b; // 312
    
    cout<<abc+bca+cab<<endl;

    return 0;
}