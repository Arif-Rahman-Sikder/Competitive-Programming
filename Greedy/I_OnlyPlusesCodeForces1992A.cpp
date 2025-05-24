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
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        int ops = 5;
        while(ops--){
            if(arr[0]<=arr[1] && arr[0] <= arr[2]) arr[0]++;
            else if(arr[1] <= arr[0] && arr[1]<= arr[2]) arr[1]++;
            else {
                arr[2]++;
            }
        }
      int mul = arr[0] * arr[1] * arr[2];
      cout<<mul<<endl;
    }

  
    

    return 0;
}