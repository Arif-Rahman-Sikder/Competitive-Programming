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

    int n, d;
    cin>>n>>d;
    char arr[n][d];
    for(int i = 0 ;i<n;i++){
        for(int j=0;j<d;j++){
            cin>>arr[i][j];
        }
    }
     
     int maxConsecutive = 0;
     int currentCount = 0;

     for(int j = 0;j<d;j++){
        bool allFree = true;
        for(int i = 0;i<n;i++){

          if(arr[i][j] == 'x'){
            allFree = false;
            break;
          }
        }
        if(allFree){
            currentCount++;
            if(currentCount>maxConsecutive){
                maxConsecutive=currentCount;

            }
        } else{
                currentCount = 0;
            }
        
     }
     cout<<maxConsecutive<<endl;

  
    

    return 0;
}