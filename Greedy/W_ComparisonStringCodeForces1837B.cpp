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
        char s[100005];
        cin >> s;

        int left[100005];
        int right[100005];
        for (int i = 0; i <= n; i++) {
            left[i] = 0;
            right[i] = 0;
        }

 
        for (int i = 1; i <= n; i++) {
            if (s[i - 1] == '<') {
                left[i] = left[i - 1] + 1;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '>') {
                right[i] = right[i + 1] + 1;
            }
        }

        int answer = 0;
        for (int i = 0; i <= n; i++) {
            int val;
            if (left[i] > right[i]) val = left[i];
            else val = right[i];
            if (val > answer) answer = val;
        }

        cout << answer + 1 << '\n';
    }


    return 0;
}