
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
   

    int roll;
    int classes;
    cin>> classes>> roll;
    int arr[roll][classes];
    for(int i=0 ; i<roll; i++){
        for(int j = 0; j<classes; j++){
            cin>>arr[i][j];
        }
    }
    for(int i =0 ; i< classes ; i++){
        for (int j = 0 ; j< roll ;j++){
                cout<<j;
            if( arr[i][j]<50) cout<< " B ";
            else{
                cout<<" G ";
            }

        }
         cout<<endl;
    }

    return 0;
}





