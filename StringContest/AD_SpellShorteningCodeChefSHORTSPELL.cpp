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
      char ch[400000];
      cin>>ch;
      int length = 0;
      for(int i=0 ; ch[i]!= '\0';i++){
          length++;

          int aciich = ch[i] - '0';

          for(int i = 0 ; i<length;i++){
            int max = aciich;
            if(aciich<ch[i]){
                  max = ch[i];
               
            }
          }
             cout<<ch[i] - 'a'<<endl;

          
      }
      
    }

  
    

    return 0;
}