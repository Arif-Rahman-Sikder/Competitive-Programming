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
    	int n, k;
    	cin>>n>>k;
    	int a[100005], pos[100005];

    	for(int i = 0 ; i<n ;i++){
    		cin>>a[i];
    		pos[a[i]] = i;
    	}
    	int cnt = 1; 
    	for(int i = 2 ; i<=n ;i++){
    		if(pos[i] > pos[i-1]){
    			cnt++;
    		}else{
    			break;
    		}
    	}
    	int ans = 0 ;

    	if(cnt<n){
    		ans =(n - cnt + k - 1) / k;
    	}

    	cout<<ans<<endl;
    }


  
    

    return 0;
}