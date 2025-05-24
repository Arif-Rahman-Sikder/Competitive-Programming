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
//     char str[105][105];

//     int n, m ;
//     cin>>n>>m;


//     for(int i = 0; i<n; i++){
//     	cin>> str[i];
//     }

//     int r, c;
//     cin>>r>>c;
//     r--;
//     c--;
//     bool allX = true;
//     if(r - 1 >= 0){
//         if(str[r-1][c] != 'x') allX = false;
//         if(c - 1 >= 0){
//             if(str[r-1][c-1] != 'x') allX = false;

//         }
//         if(c + 1 < m){
//             if(str[r-1][c+1] != 'x' ) allX = false;
//         }
//     }
//     if(r+1<n){
//         if(str[r+1][c] != 'x') allX = false;
//         if(c-1>=0){
//             if(str[r+1][c-1]!= 'x') allX= false;
//         }
//         if(c+1<m){
//             if(str[r+1][c+1] != 'x') allX = false;
//         }
//     }

//     if(c-1>=0){
//         if(str[r][c-1] != 'x') allX = false;
//     }
//     if(c+1<m){
//         if(str[r][c+1] != 'x') allX = false;
//     }

//     if(allX) cout<<"yes"<<endl;
//     else cout<<"no"<<endl;
    

//     return 0;
// }
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
    char str[105][105]; // Changed from int to char for character grid input

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> str[i]; // Read the character grid properly
    }

    int r, c;
    cin >> r >> c;
    r--;
    c--;
    
    bool allX = true;

    if (r - 1 >= 0) {
        if (str[r - 1][c] != 'x') allX = false;
        if (c - 1 >= 0 && str[r - 1][c - 1] != 'x') allX = false;
        if (c + 1 < m && str[r - 1][c + 1] != 'x') allX = false;
    }
    if (r + 1 < n) {
        if (str[r + 1][c] != 'x') allX = false;
        if (c - 1 >= 0 && str[r + 1][c - 1] != 'x') allX = false;
        if (c + 1 < m && str[r + 1][c + 1] != 'x') allX = false;
    }
    if (c - 1 >= 0 && str[r][c - 1] != 'x') allX = false;
    if (c + 1 < m && str[r][c + 1] != 'x') allX = false;

    if (allX) 
        cout << "yes" << endl;
    else 
        cout << "no" << endl;

    return 0;
}
