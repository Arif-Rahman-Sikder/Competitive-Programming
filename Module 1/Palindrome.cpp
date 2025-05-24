#include <bits/stdc++.h>
// [-(~TheHonestGuy~)-]
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction()  cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset (a, b, sizeof(a))
#define sqr(a) ((a) * (a))

int main() {
    optimize();
    
    char str[100];
    cin>>str;
    int len=0;
    while( str[len]  != '\0' ) len++;

    // cout<<len<<endl;
    bool isPalindrome = true;
    for(int i = 0; i< len/2;i++){
        if(str[i] != str[len-i-1]) isPalindrome=false;
    }
    if(isPalindrome) cout<<" isPalindrome ";
    else cout<<" not Palindrome"<<endl;



    return 0;
}