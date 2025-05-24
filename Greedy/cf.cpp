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
ll t;
    cin >> t;
    while(t--) {
        ll x, k;
        cin >> x >> k;
        
        ll newNum = 0;
        if(k == 1) {
            newNum = x;
        }
        else if(k == 2) {
            newNum = x * 10 + x;
        }
        else if(k == 3) {
            newNum = x * 100 + x * 10 + x;
        }
        else if(k == 4) {
            newNum = x * 1000 + x * 100 + x * 10 + x;
        }
        else if(k == 5) {
            newNum = x * 10000 + x * 1000 + x * 100 + x * 10 + x;
        }
        else if(k == 6) {
            newNum = x * 100000 + x * 10000 + x * 1000 + x * 100 + x * 10 + x;
        }
        else if(k == 7) {
            newNum = x * 1000000 + x * 100000 + x * 10000 + x * 1000 + x * 100 + x * 10 + x;
        }
        
        bool is_prime = true;
        if(newNum <= 1) {
            is_prime = false;
        }
        else if(newNum == 2) {
            is_prime = true;
        }
        else if(newNum % 2 == 0) {
            is_prime = false;
        }
        else {
            for(ll i = 3; i * i <= newNum; i += 2) {
                if(newNum % i == 0) {
                    is_prime = false;
                    break;
                }
            }
        }
        
        if(is_prime) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

  
    

    return 0;
}