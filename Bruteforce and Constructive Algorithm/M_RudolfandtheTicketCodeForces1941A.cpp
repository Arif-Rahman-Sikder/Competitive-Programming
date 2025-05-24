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
    	int n, m , k;
    	cin>>n>>m>>k;
    	int arrleft[1000];
    	int arrright[1000];
    	for(int i = 0 ; i< n ; i++){
    		cin>>arrleft[i];
    	}
    	for(int i = 0 ; i < m ; i++){
    		cin>>arrright[i];
    	}

        int ways = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arrleft[i] + arrright[j] <= k) {
                    ways++;
                }
            }
        }
        cout << ways << endl;
    }


  
    

    return 0;
}