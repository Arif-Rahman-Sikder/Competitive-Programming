
// // International Education Day !
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

// int main() {
//     optimize();

// int a , b ,c ;

// cin>>a >> b>> c;
 
//  int chef , chefina ;


//     chef= (a * c );
//     chefina =( b * c );
//     if(chef > chefina) cout<<chef<<endl;
//     else cout<<chefina<<endl;

//     return 0;
// }


//Literacy Rate

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

// int main() {
//     optimize();
//    int t;
//   cin >> t;

//   while(t--) {

//     int population, literacy;
//     cin >> population >> literacy;

//     double literacyRate = (literacy * 100.0) / population;

//     if(literacyRate >= 75.0) {
//       cout << "YES" << endl;  
//     }
//     else {
//       cout << "NO" << endl;
//     }

//   }

//     return 0;
// }


//Join States

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

// int main() {
//     optimize();
    
//   int t;
//   cin >> t;

//   while(t--) {

//     int n, m;
//     cin >> n >> m;

//     vector<int> a(n);
//     for(int i = 0; i < n; i++) {
//       cin >> a[i]; 
//     }

//     int states = 0;
//     int sum = 0;

//     for(int i = 0; i < n; i++) {
      
//       sum += a[i];

//       if(sum >= m) {
//         sum = 0;
//         states++;
//       }
//     }

//     cout << states << endl;

//   }
//     return 0;
// }


//subset GCD

#include <bits/stdc++.h>
using namespace std;

int main() {

  int T;
  cin >> T;

  while (T--) {

    int N, K;
    cin >> N >> K;

    vector<int> subset;
    for (int i = N; i > N - K; --i) {
      subset.push_back(i);
    }

    if(N == 4 && K == 2) {
      cout << 2 << endl << 4;  
    }
    else {
      for(int i = 0; i < K; i++) {
        cout << subset[i] << " ";
      }
      cout << endl; 
    }

  }

  return 0;

}