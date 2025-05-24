#include <bits/stdc++.h>
// [-(~TheHonestGuy~)-]
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))

int a[300005], sorted[300005], freq[300005], freqCount[300005];
ll answer[300005];

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sorted[i] = a[i];
        }

    
        sort(sorted, sorted + n);
        int m = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0 || sorted[i] != sorted[i - 1]) {
                sorted[m++] = sorted[i];
            }
        }

        for (int i = 0; i < m; i++) freq[i] = 0;
        for (int i = 0; i <= n; i++) {
            freqCount[i] = 0;
            answer[i] = 0;
        }

      
        for (int i = 0; i < n; i++) {
            int pos = lower_bound(sorted, sorted + m, a[i]) - sorted;
            freq[pos]++;
        }

       
        for (int i = 0; i < m; i++) {
            freqCount[freq[i]]++;
        }

        
        for (int f = 1; f <= n; f++) {
            if (freqCount[f] == 0) continue;
            for (int k = 1; k <= n; k++) {
                int needed = (f + k - 1) / k;
                if ((ll)freqCount[f] * needed > n) break;
                answer[k] += 1LL * freqCount[f] * needed;
            }
        }

        for (int k = n; k >= 1; k--) {
            cout << answer[k] << " ";
        }
        cout << endl;
    }

    return 0;
}
