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
    int cnt = 0;
    while(t--){
    	int n;
    	cin>>n;
    	int a[300100];
    	int b[300100];
        int mina = INT_MAX;
        int minb = INT_MAX;
        ll suma = 0;
        ll sumb = 0;
    	for(int i = 0 ;i<n ;i++){
           cin>>a[i];
           suma+=a[i];
           if(a[i]<mina){
            mina = a[i];
           }


    	}
    	for(int i = 0 ;i<n ;i++){
           cin>>b[i];
           sumb+=b[i];
            if(b[i]<minb){
            minb = b[i];
           }
    	}
      ll newa = suma + (1ll*minb*n);
      ll newb = sumb +(1ll* mina*n);

      if(newa<newb){
        cout<<newa<<endl;
      }else{
        cout<<newb<<endl;
      }

        
    }



  
    

    return 0;
}