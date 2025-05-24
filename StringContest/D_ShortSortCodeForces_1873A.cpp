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
        char ch[4];  
        cin >> ch;   
        
       
        if (ch[0] == 'a' && ch[1] == 'b' && ch[2] =='c') {
            cout << "YES" << endl;
        } else {
            
            int mismatches = 0;
            if (ch[0] != 'a') mismatches++;
            if (ch[1] != 'b') mismatches++;
            if (ch[2] != 'c') mismatches++;
            
           
            if (mismatches == 2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}