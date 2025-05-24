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
        int arr[2005];
        for(int i = 0 ;i <n ; i++){
            cin>>arr[i];
        }

        int result = arr[n-1] - arr[0];

        for(int i = 1 ; i <n ;i++){
            int diff = arr[i] - arr[0];
            if(diff>result) result = diff;
        }

        for(int i= 0 ; i < n-1 ; i++){
            int diff = arr[n-1] - arr[i];
            if(diff > result) result = diff;
        }

        for(int i = 1 ; i<n; i++){
            int diff = arr[i-1] - arr[i];
            if(diff> result) result = diff;
        }

       cout<<result<<endl;
    }

  
    

    return 0;
}