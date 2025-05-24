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
    char s[105];
    cin>>s;
    int cnt1=0, cnt2=0;
    for(int i = 0 ; i<n ; i++){
        if(s[i] =='0') cnt1++;
        else cnt2++;
    }
    if(cnt1>cnt2){
        cout<<"YES"<<endl;
        continue;
    }
    bool canInsertZero = false;
    for( int i = 0 ;i <n -1 ;i ++){
        if(s[i] != s[i+1]){
            canInsertZero = true;
            break;
        }
    }
    if(canInsertZero){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   }

  
    

    return 0;
}