#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        
        int whole1 = 0, whole2 = 0, whole3 = 0, whole4 = 0, whole5 = 0;
        int cnt = 0; 

        if (n >= 10000) {
            whole1 = (n / 10000) * 10000;
            if (whole1 != 0) cnt++;
            n %= 10000;
        }
        if (n >= 1000) {
            whole2 = (n / 1000) * 1000;
            if (whole2 != 0) cnt++;
            n %= 1000;
        }
        if (n >= 100) {
            whole3 = (n / 100) * 100;
            if (whole3 != 0) cnt++;
            n %= 100;
        }
        if (n >= 10) {
            whole4 = (n / 10) * 10;
            if (whole4 != 0) cnt++;
            n %= 10;
        }
        if (n > 0) {
            whole5 = n;
            cnt++;
        }

        cout << cnt << endl;

      
        if (whole1 != 0) cout << whole1 << " ";
        if (whole2 != 0) cout << whole2 << " ";
        if (whole3 != 0) cout << whole3 << " ";
        if (whole4 != 0) cout << whole4 << " ";
        if (whole5 != 0) cout << whole5; 
        cout << endl;
    }

    return 0;
}