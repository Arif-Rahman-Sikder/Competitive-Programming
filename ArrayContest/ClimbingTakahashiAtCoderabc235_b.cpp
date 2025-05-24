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

    ll arr[t];

    for(int i = 0 ;i<t;i++){
        cin>>arr[i];
    }


  ll pointer = arr[0];

  for (int i = 0; i<t-1;i++){
   if(arr[i+1]>arr[i]){
    pointer = arr[i+1];
   }else{
    break;

   }


  }
  cout<<pointer<<endl;

   




  
    

    return 0;
}