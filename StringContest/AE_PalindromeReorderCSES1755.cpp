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
int lcm(int a, int b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    optimize();

    char ch[1000100];
    cin >> ch;

    int freq[26] = {0};
    int length = 0;

    for (int i = 0; ch[i] != '\0'; i++) {
        length++;
        freq[ch[i] - 'A']++;
    }

    int oddCount = 0, oddIndex = -1;
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            oddCount++;
            oddIndex = i;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
 
    char fhalf[1000100], middle[2], shalf[1000100];
    int fhalfidx = 0, midx = 0, shalfidx = 0;

    middle[0] = '\0';  

    for (int i = 0; i < 26; i++) {
        int count = freq[i];

        if (count % 2 == 1) {
            middle[0] = 'A' + i;  
            middle[1] = '\0';
        }
        
        for (int j = 0; j < count / 2; j++) {
            fhalf[fhalfidx++] = 'A' + i;
        }
    }
    
    for (int i = 0; i < fhalfidx; i++) {
        shalf[shalfidx++] = fhalf[fhalfidx - i - 1];
    }
    
    fhalf[fhalfidx] = '\0';
    shalf[shalfidx] = '\0';

    cout << fhalf << middle << shalf << endl;

    return 0;
}