#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        int steps = 0;

        while (n % 2 == 0) {
            n /= 2;
            steps++;
        }

        while (n % 3 == 0) {
            n = (2 * n) / 3;
            steps++;
        }

        while (n % 5 == 0) {
            n = (4 * n) / 5;
            steps++;
        }

        if (n == 1) cout << steps << endl;
        else cout << -1 << endl;
    }
    return 0;
}
