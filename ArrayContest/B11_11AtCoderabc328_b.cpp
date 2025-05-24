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

int main() {
    optimize();
    int t;
    cin >> t;

    int arr[100]; // Max N is 100
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    int digits_i[2], digits_j[3]; // Max digits: i (2), j (3)

    for (int i = 1; i <= t; i++) {
        // Get digits of month i
        int temp = i;
        int len_i = 0;
        while (temp > 0) {
            digits_i[len_i] = temp % 10;
            temp /= 10;
            len_i++;
        }
        int same_i = 1;
        for (int k = 1; k < len_i; k++) {
            if (digits_i[k] != digits_i[0]) {
                same_i = 0;
                break;
            }
        }
        if (same_i == 0) continue;
        int digit_i = digits_i[0];

        // Check days in month i
        for (int j = 1; j <= arr[i - 1]; j++) {
            temp = j;
            int len_j = 0;
            while (temp > 0) {
                digits_j[len_j] = temp % 10;
                temp /= 10;
                len_j++;
            }
            int same_j = 1;
            for (int k = 1; k < len_j; k++) {
                if (digits_j[k] != digits_j[0]) {
                    same_j = 0;
                    break;
                }
            }
            if (same_j == 1 && digits_j[0] == digit_i) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}