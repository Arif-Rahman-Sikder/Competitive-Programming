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
        int x, y, k;
        cin >> x >> y >> k;

        int option1 = abs(y) + abs(x - y); 

        int option2 = 1e9;
        int carry_time = abs(x - y);

        if (carry_time <= k) {
            option2 = abs(x) + carry_time;
        } else {

            int max_carry = k;
            int drop_pos;
            if (x < y) drop_pos = x + k;
            else drop_pos = x - k;
            option2 = abs(x) + k + abs(y - drop_pos) + abs(y - drop_pos);
        }

        int ans;
        if(option1<option2){
            ans = option1;

        }else{
            ans = option2;
        }

        cout << ans << endl;
    }

    return 0;
}
