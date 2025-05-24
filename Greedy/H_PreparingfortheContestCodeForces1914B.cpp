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

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

       for(int i = n-k ; i>=1 ;i--){
        cout<<i<<" ";
       }
       int rem = n-k+1;
       for(int i = rem ; i<=n;i++){
        cout<<i<<" ";
       }
       cout<<endl;
   }

    return 0;
}
