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
   while(t--){
   	  char ch[4][4];
   	  int q_row = -1 , q_col = -1;
      for(int i =0 ; i<3 ; i++){
        for (int j = 0 ;j<3 ; j++){
            cin>>ch[i][j];
            if(ch[i][j] == '?'){
                q_row = i;
                q_col =j;

            }
        }
      }

      bool isA = false, isB = false, isC = false;
      for(int j = 0 ; j< 3 ; j++){
        if(ch[q_row][j] ==  'A') {
            isA = true;
        }else if( ch[q_row][j] == 'B'){
            isB = true;
        }else if (ch[q_row][j] == 'C'){
            isC = true;
        }
      }


      if(!isA){
        cout<<'A'<<endl;
      }else if (!isB){
        cout<<'B'<<endl;
      }else if (!isC){
        cout<<'C'<<endl;
      }
   }



  
    

    return 0;
}