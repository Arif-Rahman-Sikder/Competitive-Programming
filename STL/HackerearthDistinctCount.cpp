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
        int n, x;
        cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<v.size();i++) cin>>v[i];
        
        sort(v.begin(),v.end());
        int size= unique(v.begin(), v.end())-v.begin();

        if(size==x) cout<<"Good"<<endl;
        else if(size<x) cout<<"Bad"<<endl;
        else cout<<"Average"<<endl;

    }

    return 0;
}