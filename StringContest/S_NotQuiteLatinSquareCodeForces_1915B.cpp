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
     char ch[4][4];
     while(t--){
     int freq[3] = {0, 0, 0};
     int missingRow = -1, missingCol = -1;

     for (int i = 0; i < 3 ; ++i)
     {
     	for (int j = 0; j < 3; ++j)
     	{
     		cin>>ch[i][j];

            if(ch[i][j] == '?'){
              missingRow = i;
              missingCol = j;
            }
     	}
     }

     for(int i = 0 ; i<3; i++){
        if(ch[i][missingCol] == 'A') freq[0] = 1;
        if(ch[i][missingCol] == 'B') freq[1] = 1;
        if(ch[i][missingCol] == 'C') freq[2] = 1;

     }

     if(freq[0] == 0){
        cout<<'A'<<endl;
     }else if (freq[1] == 0){
        cout<<'B'<<endl;
     }else {
        cout<<'C'<<endl;
     }

}   
  
    

    return 0;
}