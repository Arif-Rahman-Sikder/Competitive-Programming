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

const int MAX_N = 1e5 + 5;

int v[MAX_N];
int frekbit[31];

int main() {
    optimize();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int ori = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            ori |= v[i];
        }

        int lo = 1, hi = n;

        while (lo < hi) {
            int mid = (lo + hi) / 2;

            // Reset frequency array
            for (int i = 0; i < 31; i++) frekbit[i] = 0;

            // First window
            for (int i = 0; i < mid; i++) {
                int x = v[i];
                for (int j = 30; j >= 0; j--) {
                    if (x >= (1 << j)) {
                        x -= (1 << j);
                        frekbit[j]++;
                    }
                }
            }

            int or2 = 0;
            for (int i = 0; i < 31; i++) {
                if (frekbit[i] > 0) or2 += (1 << i);
            }

            bool valid = (or2 == ori);

            // Sliding window
            for (int i = 1; i + mid - 1 < n && valid; i++) {
                int x = v[i - 1];
                for (int j = 30; j >= 0; j--) {
                    if (x >= (1 << j)) {
                        x -= (1 << j);
                        frekbit[j]--;
                        if (frekbit[j] == 0) {
                            or2 -= (1 << j);
                        }
                    }
                }

                x = v[i + mid - 1];
                for (int j = 30; j >= 0; j--) {
                    if (x >= (1 << j)) {
                        x -= (1 << j);
                        frekbit[j]++;
                        if (frekbit[j] == 1) {
                            or2 += (1 << j);
                        }
                    }
                }

                if (or2 != ori) valid = false;
            }

            if (valid) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }

        cout << lo << endl;
    }

    return 0;
}
