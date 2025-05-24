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

int ceil(int a, int b) {
    return (a + b - 1) / b;
}
int lcm (int a, int b){
    return (a + b) / __gcd(a,b);
}



int main() {
    optimize();

    int t; 
    cin>>t;
    while(t--){
        char ch[15];
        cin >>ch;
        int len = 0 ;
        while(ch[len] != '\0') len++;

        int m = 0;
        for(int i = 0 ; i < len ;i ++){
            m = m*10 + (ch[i] - '0');
        }

             int pow10 = 1;
        if (len == 1) pow10 = 1;
        else if (len == 2) pow10 = 10;
        else if (len == 3) pow10 = 100;
        else if (len == 4) pow10 = 1000;
        else if (len == 5) pow10 = 10000;
        else if (len == 6) pow10 = 100000;
        else if (len == 7) pow10 = 1000000;
        else if (len == 8) pow10 = 10000000;
        else if (len == 9) pow10 = 100000000;
        else if (len == 10) pow10 = 1000000000;

        cout<<m - pow10<<endl;
 

    }


  
    

    return 0;
}