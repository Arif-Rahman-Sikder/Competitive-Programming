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

int n, q;
int arr[200005];
int price[1000005];
int sorted[200005];
ll prefix[200005];

int main() {
    optimize();

   cin >> n >> q;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        price[arr[i]]++;
    }

    int idx = 0;
    for (int i = 1; i <= 1000000; i++) {
        while (price[i] > 0) {
            sorted[idx++] = i;
            price[i]--;
        }
    }

    prefix[0] = sorted[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + sorted[i];
    }

    while (q--) {
        int x, y;
        cin >> x >> y;

        int start = n - x;
        int end = start + y - 1;

        ll sum = prefix[end];
        if (start > 0) sum -= prefix[start - 1];

        cout << sum << endl;
    }
    

    return 0;
}