#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int n;
        cin >> n;

        int cnt = 0;
        for (int j = 1; j * j <= n; j++) {
            if (n % j == 0) {
                cnt++;
                if (j != n / j) {
                    cnt++;
                }
            }
        }

        cout << "Case " << i << ": " << cnt << endl;
    }

    return 0;
}
