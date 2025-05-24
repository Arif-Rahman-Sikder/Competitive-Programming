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
    int flag = 0;
    int n , m, x;

    cin>> n>> m;
     int arr[n+1][m+1];
    for(int i = 0 ;i<n;i++){
    	for(int j = 0; j<m;j++){
    		cin>>arr[i][j];
    	}
    }
   cin>>x;
    for(int i = 0 ;i<n;i++){
    	for(int j = 0; j<m;j++){
    		if(arr[i][j] == x){
    		   flag = 1;
    		   cout<<"will not take number"<<endl;
    		   break;
    		   

    		}
    	}
    	if(flag) break;
    }
    if(flag==0) cout<<"will take number"<<endl;

	
    return 0;
}
