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
   int t ;
   cin>>t;
   while(t--){
   	int n;
   	cin>>n;
   int arr[n][n];

   	for(int i = 0 ;i<n;i++){
     
       for(int j =0;j<n;j++){
       	cin>>arr[i][j];

       }


   	}
     int top = 0, bottom = n-1 , left = 0 , right = n-1;

     while(top<=bottom && left <= right){
        for(int j = left; j<= right ; j++){
            cout<<arr[top][j]<<" ";
            
        }
        top++;
        for(int i = top ; i<= bottom ; i++){
            cout<<arr[i][right]<<" ";
         
        }
           right--;
        if(top<=bottom){
            for(int j = right ; j>= left ;j--){
                cout<<arr[bottom][j]<<" ";
               
            }
             bottom--;
        }
        if(left<= right){

            for(int i = bottom ; i >= top ; i--){
                cout<<arr[i][left]<<" ";
               
            }
             left++;
        }
        
       
     } 
      cout<<endl;

   }

  
    

    return 0;
}