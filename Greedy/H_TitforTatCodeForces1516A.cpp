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
    	
    	int n,k;
    	cin>>n>>k;
    	int arr[101];
    	for(int i = 0 ;i < n; i++ ){
    		cin>>arr[i];
            
    	}

        for(int i = 0 ;i<n-1 && k>0 ;i++){
            int move ;
            if(arr[i] < k){
                move = arr[i] ;
            }else{
                move = k ;
            }

            arr[i] -= move;
            arr[n-1] +=move;
            k -= move;
        }


        

        for(int i = 0 ; i < n;i ++){
            cout<<arr[i]<<" ";
           
        }
         cout<<endl;
    }

  
    

    return 0;
}