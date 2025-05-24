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

bool perfectSquare[100000001];

int main() {
    optimize();
   
    int n;
    cin>>n;
    for(int i = 1 ;i<=n;i++){
    	perfectSquare[i*i] = true;
    }
 int cnt = 0;
    for(int i = 1 ; i <=n; i++){
    	for(int j = i ; j <=n ; j++){
          int csquare = (i*i) + (j*j);
          if(csquare <= n*n && perfectSquare[csquare]) cnt++;
           
    	}
   }

   cout<<cnt;

  
    

    return 0;
}