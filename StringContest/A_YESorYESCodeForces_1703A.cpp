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
    int t ;
    cin>>t;
    char ch[4];
    while(t--){

     cin>>ch;

     for(int i = 0 ; ch[i] != '\0'; i++){
        if(ch[i] >= 'a' && ch[i]<= 'z'){
            ch[i] = ch[i] -32;
        }
     }

    if(ch[0] == 'Y' && ch[1] == 'E' && ch[2] =='S' ){
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }

    }

  
    

    return 0;
}