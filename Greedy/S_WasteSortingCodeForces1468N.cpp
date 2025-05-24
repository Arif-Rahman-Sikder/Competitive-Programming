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
    ll c1, c2,c3;
    cin>>c1>>c2>>c3;

    ll a1, a2, a3, a4, a5;
    cin>>a1>>a2>>a3>>a4>>a5;

    c1 -=a1;
    c2 -=a2;
    c3 -=a3;
    if(c1<0 || c2<0 ||c3<0){
        cout<<"NO"<<endl;
        continue;
    }
      ll rem_a4, rem_a5;

   if(a4<= c1){
    rem_a4 = 0;
   }else{
     rem_a4 = a4-c1;

   }

   if(a5 <= c2){
    rem_a5 = 0;
   }else{
    rem_a5 = a5- c2;
   }


   if(rem_a4 + rem_a5 <= c3){
       cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }

   }





    return 0;
}