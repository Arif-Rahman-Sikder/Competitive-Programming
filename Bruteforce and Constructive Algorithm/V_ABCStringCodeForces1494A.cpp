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
        char ch[51];
        cin >> ch;
        int n = 0;
        while (ch[n] != '\0') {
            n++;
        }
        int freq[3];
        freq[0] = 0;
        freq[1] = 0;
        freq[2] = 0;
        for (int i = 0; i < n; i++) {
            if (ch[i] == 'A') freq[0]++;
            else if (ch[i] == 'B') freq[1]++;
            else if (ch[i] == 'C') freq[2]++;
        }
        char b[51];
        int half = n / 2;
        bool possible = false;
        for (int comb = 0; comb < 8; comb++) {
            int a_assign = comb % 2;
            int b_assign = (comb / 2) % 2;
            int c_assign = (comb / 4) % 2;
            int sum = 0;
            if (a_assign == 1) sum += freq[0];
            if (b_assign == 1) sum += freq[1];
            if (c_assign == 1) sum += freq[2];
            if (sum != half) continue;
            for (int i = 0; i < n; i++) {
                if (ch[i] == 'A') {
                    b[i] = (a_assign == 1) ? '(' : ')';
                } else if (ch[i] == 'B') {
                    b[i] = (b_assign == 1) ? '(' : ')';
                } else if (ch[i] == 'C') {
                    b[i] = (c_assign == 1) ? '(' : ')';
                }
            }
            b[n] = '\0';
            int balance = 0;
            bool valid = true;
            for (int i = 0; i < n; i++) {
                if (b[i] == '(') balance++;
                else balance--;
                if (balance < 0) {
                    valid = false;
                    break;
                }
            }
            if (balance != 0) valid = false;
            if (valid) {
                possible = true;
                break;
            }
        }
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
  
    

    return 0;
}