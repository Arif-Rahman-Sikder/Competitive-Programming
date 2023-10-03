#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    char c;
    cin >> c;
    int ascii = c;
    if (ascii >= 65 && ascii <= 90 || c >= 'A' && c <= 'Z')
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (ascii >= 97 && ascii <= 122 || c >= 'a' && c <= 'z')
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else
    {
        cout << "IS DIGIT" << endl;
    }
    return 0;
}