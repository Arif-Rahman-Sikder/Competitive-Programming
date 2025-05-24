#include <bits/stdc++.h>
// [-(~TheHonestGuy~)-]
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))

int ceil(int a, int b) {
    return (a + b - 1) / b;
}
int lcm(int a, int b) {
    return (a + b) / __gcd(a, b);
}

int main() {
    optimize();

    int t;
    cin >> t;

    while (t--) {
        char s[200005];
        cin >> s;

        int n = 0;
        while (s[n] != '\0') {
            n++;
        }

        if (n == 2) {
            cout << "NO" << endl;
            continue;
        }

        int b[200005];
        mem(b, 0);
        if (s[0] == '(') {
            b[0] = 1;
        } else {
            b[0] = -1;
        }
        for (int i = 1; i < n; i++) {
            if (s[i] == '(') {
                b[i] = b[i - 1] + 1;
            } else {
                b[i] = b[i - 1] - 1;
            }
        }

        bool f = false;
        for (int i = 0; i < n && !f; i++) {
            if (s[i] == '(') {
                for (int j = i + 1; j < n && !f; j++) {
                    if (s[j] == ')') {
                        int m = 0;
                        for (int k = 0; k < n; k++) {
                            if (k != i && k != j) {
                                int v;
                                if (k == 0) {
                                    v = 0;
                                } else {
                                    v = b[k - 1];
                                }
                                if (k > i && k <= j) {
                                    if (s[i] == '(') {
                                        v = v - 1;
                                    } else {
                                        v = v + 1;
                                    }
                                }
                                if (k > j) {
                                    if (s[i] == '(') {
                                        v = v - 1;
                                    } else {
                                        v = v + 1;
                                    }
                                    if (s[j] == ')') {
                                        v = v - (-1);
                                    } else {
                                        v = v - 1;
                                    }
                                }
                                if (v < m) {
                                    m = v;
                                }
                                if (m < 0) {
                                    f = true;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }

        if (f) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}