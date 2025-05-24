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

     int grid[9][9];

   
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> grid[i][j];
        }
    }

    int rowFrequency[9][10] = {0};
    int columnFrequency[9][10] = {0};
    int subGridFrequency[9][10] = {0};

    bool isValid = true; 

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int num = grid[i][j];
            int subGridIndex = (i / 3) * 3 + (j / 3);

            if (rowFrequency[i][num] == 1 || columnFrequency[j][num] == 1 || subGridFrequency[subGridIndex][num] == 1) {
                isValid = false; 
            }

            rowFrequency[i][num] = columnFrequency[j][num] = subGridFrequency[subGridIndex][num] = 1;
        }
    }


    if (isValid) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    

    return 0;
}