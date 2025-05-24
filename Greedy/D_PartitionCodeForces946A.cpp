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
    // sequence a  - > n integers
    //  partition = sequence/2;
    //  b = seq/2
    //  c = seq/2

    //  B-> sum of b 
    //  C-> sum of c

    //  if empty then sum->0
    //     maximum possible value of B-C??

    

   int n;
   cin>>n;

   int a[105];

   for(int i = 0 ;i<n;i++){
    cin>>a[i];
   }

   int ans = 0;
   for(int i = 0 ; i<n ;i++){
    if(a[i]>=0){
        ans+=a[i];
    }else{
        ans-=a[i];
    }
   }
   cout<<ans<<endl;

  
    

    return 0;
}