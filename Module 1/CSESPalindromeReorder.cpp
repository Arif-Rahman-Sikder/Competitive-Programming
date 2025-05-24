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
     char str[1000001];
    scanf("%s", str);
    int cnt[26];
    int ln = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        cnt[str[i] - 'A']++;
        ln++;
    }
    int oddCount = 0;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 == 1) oddCount++;
    }
    if (oddCount > 1) {
        printf("NO SOLUTION\n");
        return 0;
    }
    int id = 0;
    for (int letter = 0; letter < 26; letter++) {
        while (cnt[letter] >= 2) {
            cnt[letter] -= 2;
            str[id] = 'A' + letter;
            str[ln - 1 - id] = 'A' + letter;
            id++;
        }
    }
    for (int letter = 0; letter < 26; letter++) {
        if (cnt[letter]) {
            str[id] = 'A' + letter;
        }
    }
    printf("%s\n", str);
return 0;
}