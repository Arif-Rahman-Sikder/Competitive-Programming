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
    int x[101], y[101];

    for(int i = 0 ; i<t; i++){
        cin>>x[i]>>y[i];
    }
    int max_sq_dist = 0 ;
    for(int i = 0 ; i<t ;i++){
        for(int j = 0 ; j<t;j++){
            int current_sqdist = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
            max_sq_dist = max(max_sq_dist , current_sqdist);

        }
    }
    fraction();
    cout<<sqrt(max_sq_dist);
  
    

    return 0;
} 