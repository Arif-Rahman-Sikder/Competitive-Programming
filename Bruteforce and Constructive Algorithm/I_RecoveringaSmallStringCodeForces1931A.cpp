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
    	int n;
    	cin>>n;
    char answer[4] ;
     bool found = false;
    	
        for(int i = 1 ; i<= 26 && !found ; i++){
            for(int j = 1 ; j<=26 && !found ; j++){
                int k = n - i - j;
                if(k >=1 && k <= 26 ){
                    answer[0] = (char) (i +'a'-1);
                    answer[1] = (char) (j +'a'-1);
                    answer[2] = (char) (k +'a'-1);
                    answer[3] = '\0';
                    found = true ;
                }
            }
        }
        cout<<answer<<endl;

    }


  
    

    return 0;
}