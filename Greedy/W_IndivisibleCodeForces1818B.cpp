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
  
       if(n==1){
        cout<<1<<endl;
        continue;
       }

       if(n%2!= 0){
        cout<<-1<<endl;
        continue;
       }
       int a[110];
       for(int i = 0 ;i<n ;i++){
        a[i] = i+1;
       }
       for(int i =1 ;i<n ;i+=2){
         swap(a[i], a[i-1]);
       }

       for(int i = 0 ;i<n ;i++){
        cout<<a[i]<<" ";
       }
       cout<<endl;
    }


  
    

    return 0;
}