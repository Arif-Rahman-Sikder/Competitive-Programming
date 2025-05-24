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
        int a , b , c , d;
        cin>>a>>b;
        cin>>c>>d;
        bool isBeautiful = false;
         for(int i = 0 ; i< 4 ; i++){
            if(a<b && c < d && a < c && b < d){
               isBeautiful = true;
               break;

            }
            int temp = a ;
            a = c;
            c = d ;
            d = b;
            b = temp;

         }
         if(isBeautiful){
            cout<<"YES"<<endl;
         }else{
            cout<<"NO"<<endl;
         }
     }
  
    

    return 0;
}