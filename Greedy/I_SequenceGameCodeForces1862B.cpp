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

const int MAXN = 200005;

int b [MAXN];
int a [2*MAXN];


int main() {
    optimize();
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        for(int i = 0 ;i<n; i++){
            cin>>b[i];
        }

        int idx = 0 ;
        a[idx] = b[0];
        idx++;

        for(int i = 1 ;i<n ;i++){
            a[idx] = b[i];
            idx++;
            
            if(b[i]<b[i-1]){

                a[idx] = b[i];
                idx++;

            }
            


        }

      cout<<idx<<endl;

        for(int i = 0 ; i<idx ;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
  
    

    return 0;
}