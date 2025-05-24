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

    //tesellate - polygons(fit-together)
    //first puzzle -> f1 ps
    //second puzzle -> f2 ps
    // difference between the puzzles -> min
    // A -> No of pieces in largest puzzle
    // b-> No of pieces in smallest puzzle
    // she wants -> n such puzzles that (A-B) is minimum
     int n, m;
     cin>>n>>m;
     int arr[1001];
     for(int i = 0 ; i < m ;i++){
           cin>>arr[i];

     }

      for(int i = 0 ; i < m-1 ;i++){
           for(int j = i+1 ; j<m ; j++){
            if(arr[i]> arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp ;
            }
           }

     }



int minDiff = INT_MAX;

for (int i = 0; i <= m - n; i++) {
    int currentDiff = arr[i + n - 1] - arr[i];
    if (currentDiff < minDiff) {
        minDiff = currentDiff;
    }
}

cout<<minDiff<<endl;



   
    
  
    

    return 0;
}