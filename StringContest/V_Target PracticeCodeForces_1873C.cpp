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
        char ch[10][10];
        int cnt = 0;

        // Read the grid
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> ch[i][j];
            }
        }

        // Process each cell manually by ring
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (ch[i][j] == 'X') {
                 
                    if (i == 0 || i == 9 || j == 0 || j == 9) {
                        cnt += 1;
                    }
                   
                    else if (i == 1 || i == 8 || j == 1 || j == 8) {
                        cnt += 2;
                    }
                
                    else if (i == 2 || i == 7 || j == 2 || j == 7) {
                        cnt += 3;
                    }

                    else if (i == 3 || i == 6 || j == 3 || j == 6) {
                        cnt += 4;
                    }
                
                    else if ((i == 4 || i == 5) && (j == 4 || j == 5)) {
                        cnt += 5;
                    }
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}