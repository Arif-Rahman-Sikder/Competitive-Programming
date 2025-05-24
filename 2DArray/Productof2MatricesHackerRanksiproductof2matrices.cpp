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
    	int n1, m1, n2, m2, product;
    	cin>>n1>>m1;
    	int arr[n1][m1];
    	for(int i = 0; i<n1;i++){
    		for(int j= 0;j<m1;j++){
    			cin>>arr[i][j];
    		}
    	}
    	cin>>n2>>m2;
        int arr2[n2][m2];
    	for(int i = 0; i<n2;i++){
    		for(int j= 0;j<m2;j++){
    			cin>>arr2[i][j];
    		}
    	}
    	if(m1 != n2){
          cout<<"matrix not possible"<<endl;
            
           continue;
    	}
        int c[n1][m2];
        memset(c, 0, sizeof(c));

          for (int i = 0; i < n1; i++) {
            for (int j = 0; j < m2; j++) {
                c[i][j] = 0;
                for (int k = 0; k < m1; k++) {
                    c[i][j] += arr[i][k] * arr2[k][j];
                }
            }
        }

        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < m2; j++) {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }


       
    }
  
    

    return 0;
}