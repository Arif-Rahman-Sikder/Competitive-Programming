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
   int h, w ;
   cin>>h>>w;
   char ch[h][w];
   int cnt = 0;
   char hash ='#';

   for(int i = 0;i<h;i++){
   	for(int j = 0; j<w;j++){
   		cin>>ch[i][j];
        if(ch[i][j] == hash) cnt++;


   }
}
cout<<cnt<<endl;

  
    

    return 0;
}