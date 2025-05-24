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
    cin>>t;
    while(t--){
        char ch[10][10];
        
        int indexrow = 0;
        int indexCol = 0;
        for(int i = 0 ; i<3; i++){
            for(int j = 0 ; j<3 ;j++){
                cin>>ch[i][j];
                }
            }
          
          char winner =  '.';

          for (int i = 0; i < 3; i++) {
            if (ch[i][0] == ch[i][1] && ch[i][1] == ch[i][2] && ch[i][0] != '.') {
                winner = ch[i][0];
            }
        }

     
        for (int j = 0; j < 3; j++) {
            if (ch[0][j] == ch[1][j] && ch[1][j] == ch[2][j] && ch[0][j] != '.') {
                winner = ch[0][j];
            }
        }

     
        if (ch[0][0] == ch[1][1] && ch[1][1] == ch[2][2] && ch[0][0] != '.') {
            winner = ch[0][0];
        }

       
        if (ch[0][2] == ch[1][1] && ch[1][1] == ch[2][0] && ch[0][2] != '.') {
            winner = ch[0][2];
        }

        if (winner == '.') {
            cout << "DRAW" << endl;
        } else {
            cout << winner << endl;
        }
    }

            
        
    
    return 0;
}