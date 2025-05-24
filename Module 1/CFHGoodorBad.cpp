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

int main() {
    optimize();
    
   int t ;
   cin>> t;
   while(t--){
    bool substring= false;
   	char str[100005];
   	cin>>str;
    for(int i = 2; str[i] != '\0';i++){
    if(str[i-2] == '0' && str[i-1] == '1' && str[i] == '0' || str[i-2] == '1' && str[i-1] == '0' && str[i]=='1'){
        substring = true;
    
   }
}

   	
    if(substring){
        cout<<"Good"<<endl;
    }else cout<<"Bad"<<endl;

   

   }

    return 0;
}