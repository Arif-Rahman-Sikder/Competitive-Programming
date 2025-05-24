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
        int n, m;
        cin >> n >> m;

        char x[30], s[30];
        for (int i = 0; i < n; i++) cin >> x[i];
        x[n] = '\0';
        for (int i = 0; i < m; i++) cin >> s[i];
        s[m] = '\0';

        char curr[1000];
        int curr_len = n;
        for (int i = 0; i < n; i++) curr[i] = x[i];
        curr[n] = '\0';

        int count = 0;
        bool found = false;

     
        if (curr_len >= m) {
            bool is_substring = false;
            for (int i = 0; i <= curr_len - m; i++) {
                bool match = true;
                for (int j = 0; j < m; j++) {
                    if (curr[i + j] != s[j]) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    is_substring = true;
                    break;
                }
            }
            if (is_substring) {
                cout << 0 << endl;
                continue;
            }
        }

       
        while (curr_len <= 500 && count <= 25) {
            count++;

            for (int i = 0; i < curr_len; i++) {
                curr[curr_len + i] = curr[i];
            }
            curr_len = curr_len * 2;
            curr[curr_len] = '\0';

           
            if (curr_len >= m) {
                bool is_substring = false;
                for (int i = 0; i <= curr_len - m; i++) {
                    bool match = true;
                    for (int j = 0; j < m; j++) {
                        if (curr[i + j] != s[j]) {
                            match = false;
                            break;
                        }
                    }
                    if (match) {
                        is_substring = true;
                        break;
                    }
                }
                if (is_substring) {
                    cout << count << endl;
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }
  
    

    return 0;
}