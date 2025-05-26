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
    int arr[100100];
    bool hasZero = false;
    int ans = INT_MAX; 

    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            hasZero = true;
        } else {
            int steps = abs(arr[i]);
            if(steps < ans) {
                ans = steps;
            }
        }
    }

    if(hasZero) {
        cout << 0 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}
