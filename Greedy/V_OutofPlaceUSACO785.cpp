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
     

     int n;
     int arr[105], sorted[105];

     cin>>n;

     for(int i = 0 ; i< n ;i++){
        cin>>arr[i];
        sorted[i] = arr[i];

     }

     for(int i = 0 ; i<n-1; i++){
        for(int j = 0 ; j<n-1-i ; j++){
            if(sorted[j]> sorted[j+1]){
                int temp = sorted[j];
                sorted[j] = sorted[j+1];
                sorted[j+1] = temp;
            }
        }
     }

    int mismatch = 0 ;
    for(int i = 0 ; i<n ; i++){
        if(arr[i] != sorted[i]){
            mismatch++;
        }
    }

    int result = mismatch -1;
    if(result < 0 ) result = 0 ;
    cout<<result <<endl;

  
    

    return 0;
}