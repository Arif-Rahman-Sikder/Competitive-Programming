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
        ll a, b;
        cin >> a >> b;
        ll xk, yk, xq, yq;
        cin >> xk >> yk >> xq >> yq;

        vector<pair<ll, ll>> moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };

      
        set<pair<ll, ll>> king_positions, queen_positions;

       
        for (auto [dx, dy] : moves) {
            king_positions.insert({xk + dx, yk + dy});
        }

     
        for (auto [dx, dy] : moves) {
            queen_positions.insert({xq + dx, yq + dy});
        }

        ll count = 0;
        for (auto pos : king_positions) {
            if (queen_positions.count(pos)) {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}