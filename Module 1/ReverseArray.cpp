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
int a[mx], b[mx];
int main() {
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0 , j = n-1 ; i<n; i++ , j--){
      b[j]= a[i]  ;
    }
   for(int i = 0;i<n;i++){
    cout<<b[i]<<" ";
   }
    
    return 0;
}

//step -2 (taking only one array)

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
int main() {
    optimize();
    int n;
    cin>>n;
   for(int i = 0 ;i< n;i++){
       cin>>a[i];
    }
    for(int i = 0, j = n-1; i < j ; i++ , j-- ){
        int temp = a[i];
        a[i]=a[j];
        a[j]= temp;
    
    }
    for(int i = 0 ;i< n;i++){
        cout<<a[i]<<" ";
    }
     
    return 0;
}