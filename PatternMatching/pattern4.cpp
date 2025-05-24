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


void pattern4(int n){

for(int i = 1 ; i<=n;i++){
    for(int j = 1; j<=i;j++){
        cout<<i<<" ";
    }
    cout<<endl;
}


}

int main() {
    optimize();
    
    int t;
    cin>>t;

    while(t--){
    	int n;
    	cin>>n;
    	pattern4(n);

    }
    return 0;
}