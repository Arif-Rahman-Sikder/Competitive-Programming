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
const int mx = 2e8+12;
bool isPerfectsquare [mx]; 
int main() {
    optimize();
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
       isPerfectsquare[i*i]=true;
    }
     int count =0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            int square= sqr(i) + sqr(j);
            if(isPerfectsquare[square]){
                count++;
            }
        }

    }
    cout<<count<<endl;
    return 0;
}