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

    int t ;
    cin >> t;

    while (t--) {
        char ch[5];
        cin >> ch;

        int cnt = 4;  // Start with 4 presses per PIN

        int a = ch[0] - '0', b = ch[1] - '0', c = ch[2] - '0', d = ch[3] - '0';

        if (a == 0) a = 10;
        if (b == 0) b = 10;
        if (c == 0) c = 10;
        if (d == 0) d = 10;

        cnt += abs(a - 1);   // from starting point (1) to a
        cnt += abs(b - a);
        cnt += abs(c - b);
        cnt += abs(d - c);

        cout << cnt << endl;
    }

    return 0;
}
