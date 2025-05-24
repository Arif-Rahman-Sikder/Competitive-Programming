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

        if (n %2 == 1) {
        
            for (int i = 0; i < n; ++i)
                cout << "69 ";
        } else {
            
            cout << "1 3 ";
            for (int i = 2; i < n; ++i)
                cout << "2 ";
        }
        cout << endl;
    }

    return 0;
} 