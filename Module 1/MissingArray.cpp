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
const int mx = 100123;
int a[mx];
int freq[mx];

int main() {
    optimize();
    int n;
    cin>>n;
    for(int i = 0;i<n-1;i++) cin>>a[i];

    for(int i = 0;i<n;i++){
        freq[a[i]]++;

    }
 for(int i =0;i<n;i++){
    if(freq[i] == 0) cout<< i;
 }
    return 0;
}