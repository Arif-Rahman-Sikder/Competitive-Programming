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

    int T;
    cin >> T;

    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    while (T--) {
        int n;
        cin >> n;

        int full = n / 5;
        int rem = n % 5;

        for (int j = 0; j < 5; ++j) {
            for (int i = 0; i < full; ++i)
                cout << vowels[j];
            if (j < rem)
                cout << vowels[j];
        }
        cout << endl;
    }


    return 0;
}