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
    	int n, m;
    	cin>>n>>m;
    	ll arr1[100100];
    	ll arr2[100100];
        ll cnt1= 0;
        ll cnt2 =0;
    	for(int i = 0 ;i<n ;i++){
    		cin>>arr1[i];
            cnt1+=arr1[i];
    	}
    	for(int i = 0 ;i<m ;i++){
    		cin>>arr2[i];
            cnt2+=arr2[i];
    	}
        if(cnt1==cnt2){
            cout<<"Draw"<<endl;
        }
        if(cnt1<cnt2){
            cout<<"Tenzing"<<endl;
        }
        if(cnt1>cnt2){
            cout<<"Tsondu"<<endl;
        }
    }

  
    

    return 0;
}