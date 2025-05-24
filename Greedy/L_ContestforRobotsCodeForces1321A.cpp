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
 int n;
    cin >> n;

    int r[105], b[105];


    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int x = 0, y = 0;

    
    for (int i = 0; i < n; i++) {
        if (r[i] == 1 && b[i] == 0) {
            x++;  
        }
        if (r[i] == 0 && b[i] == 1) {
            y++;  
        }
    }

    
    if (x == 0) {
        cout << -1 << endl;
    } else {
        
        int p = (y + 1 + x - 1) / x;  
        cout << p << endl;
    }


  
    

    return 0;
}
