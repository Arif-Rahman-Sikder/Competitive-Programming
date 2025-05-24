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

    int n, m;
    cin>>n>>m;
   int arr[100][100];
    for(int i =0 ;i<n;i++){
    	for(int j=0;j<m;j++){
    		cin>>arr[i][j];
    	}
    }
    for(int i =0 ;i<n;i++){
    	for(int j=m-1;j>=0;j--){
    		cout<<arr[i][j]<<" ";
    	}
       cout<<endl;
    }
  

    
    return 0;
}