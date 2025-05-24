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
    int n;
    cin>>n;

    char s[110], rev[110], temp[220];
    cin>>s;
    int len = 0 ;
    while(s[len] != '\0') len++;

    for(int i = 0 ;i<len; i++){
        rev[i] = s[len - i -1 ];
    }
    rev[len] ='\0';

    for(int i = 0 ;i<len ;i++){
        temp[i] = rev[i];

    }

    for(int i = 0 ;i<len;i++){
        temp[len+i] = s[i];
    }
    temp[2*len] = '\0';

    bool is_Ssmaller = false;

    for(int i = 0 ;i<2*len ;i++){
        if(i>=len ){
            is_Ssmaller = true;
            break;
        }

        if(s[i]< temp[i]){
            is_Ssmaller = true;
            break;
        }else if(s[i]>temp[i]){
               break;
        } 
    }

     if(is_Ssmaller){
        for(int i= 0 ;i<len ;i++){
            cout<<s[i];
        }
     }else{
        for(int i = 0 ;i<2*len ;i++){
            cout<<temp[i];
        }

     }
     cout<<endl;

   }
  
    

    return 0;
}