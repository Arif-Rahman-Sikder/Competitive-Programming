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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum=0;
        for(auto u: s){
            sum+=(u-'0');

        }
        string str= to_string (sum);
        string temp=str;
        reverse(temp.begin(),temp.end());
        if(temp==str) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
    return 0;
}