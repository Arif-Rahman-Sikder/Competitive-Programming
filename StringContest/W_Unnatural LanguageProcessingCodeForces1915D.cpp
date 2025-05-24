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
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char ch[200005];
        cin >> ch;

        int i = 0;
        while (i < n) {
          
            if (i + 2 < n && (ch[i + 2] == 'b' || ch[i + 2] == 'c' || ch[i + 2] == 'd') &&
                (i + 3 == n || ch[i + 3] == 'b' || ch[i + 3] == 'c' || ch[i + 3] == 'd')) {
                cout << ch[i] << ch[i + 1] << ch[i + 2];
                i += 3;
            } else {
                cout << ch[i] << ch[i + 1];
                i += 2;
            }
            if (i < n) {
                cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}

// 2nd approach

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

//   int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         char ch[200005];
//         cin >> ch;

//         int i = 0;
//         while (i < n) {
//             // Default to CV (2 characters)
//             cout << ch[i] << ch[i + 1];
//             i += 2;
//             // If we have at least 2 more characters and next is consonant then vowel, adjust to CVC
//             if (i + 1 < n && (ch[i] == 'b' || ch[i] == 'c' || ch[i] == 'd') && 
//                (ch[i + 1] == 'a' || ch[i + 1] == 'e')) {
//                 // Do nothing, it’s CV
//             } else if (i < n) {
//                 // Backtrack and take CVC
//                 i -= 2;
//                 cout << ch[i] << ch[i + 1] << ch[i + 2];
//                 i += 3;
//             }
//             if (i < n) cout << ".";
//         }
//         cout << endl;
//     }
  
    

//     return 0;
// }