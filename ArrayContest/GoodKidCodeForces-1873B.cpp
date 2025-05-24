// #include <bits/stdc++.h>
// // [-(~TheHonestGuy~)-]
// using namespace std;

// typedef long long ll;
// typedef double dl;

// #define endl "\n"
// #define optimize()  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define fraction()  cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
// #define mem(a,b) memset (a, b, sizeof(a))
// #define sqr(a) ((a) * (a))

// int ceil(int a, int b) {
//     return (a + b - 1) / b;
// }
// int lcm (int a, int b){
//     return (a + b) / __gcd(a,b);
// }



// int main() {
//     optimize();


//     int t ;
//     cin>>t;

//     while(t--){
        
//         int n;
//         cin>>n;
//         int arr[n];
//         ll multiply =1;

//         for(int i = 0; i<n;i++){
//             cin>>arr[i];
//             multiply*=arr[i];
//         }
//         ll maxProduct = multiply;
//         for(int i =0;i<n;i++){
//             ll tempProduct = 1;
//             for(int j =0;j<n;j++){
//                 if(i==j){
//                     tempProduct *= (arr[j]+1);


//                 }else{
//                     tempProduct *= arr[j];
//                 }
//             }
//             if(tempProduct > maxProduct){
//                 maxProduct = tempProduct;
//             }

//         }

//              cout<<maxProduct<<endl;
//     }
    

//     return 0;
// }


// 2nd approach

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
       int arr[n];

       for(int i = 0 ;i<n;i++){
        cin>>arr[i];

       }

        ll product = 1;

        int minIndex = 0 ;

        for(int i = 0; i<n-1 ; i++){
            if(arr[i+1]<arr[minIndex]){
                minIndex = i+1;
            }
        }

        bool allSame = true;
        for(int i = 0 ; i<n-1 ; i++ ){
            if(arr[i+1] != arr[i]){
                allSame = false;
                break;
            }
        }

        if(allSame){
            arr[0]++;
        }else {
            arr[minIndex]++;
        }

        for(int i = 0 ;i<n;i++){
            product *= arr[i];
        }
        cout<<product<<endl;

    }
  
    

    return 0;
}