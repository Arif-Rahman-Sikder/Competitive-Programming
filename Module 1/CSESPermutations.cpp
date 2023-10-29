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
    int n;
    cin>>n;
 
        if(n==1) cout<<1<<endl;
        else if(n==2 || n==3){
            cout<<"NO SOLUTION"<<endl;
        }else {
            for(int i=2;i<=n;i+=2)cout<<i<<" ";
            for(int i=1;i<=n;i+=2)cout<<i<<" ";
        }
    
    return 0;
}