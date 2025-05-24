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
    int sumPD =0;
    int sumSD = 0;
    int n;
    cin>>n;
    int arr[110][110];
    for(int i = 0 ; i<n;i++){
        for(int j = 0; j<n ; j++){
            cin>>arr[i][j];
            if(i == j){
                sumPD+= arr[i][j];
            }
            if(i+j== n-1){
                sumSD+=arr[i][j];
            }
        }
    }
    


    cout<<abs(sumPD-sumSD)<<endl;







    
    return 0;
}