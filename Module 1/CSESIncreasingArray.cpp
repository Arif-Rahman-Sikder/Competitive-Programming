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
const int mx=2e5+123;
ll arr[mx];
int main() {
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    ll count =0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
         count+=(arr[i-1]-arr[i]);
         arr[i]=arr[i-1];
        }
   
    }
         cout<<count;
    return 0;
}