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

char ch[10000000];

int frequency[26];

int main() {
    optimize();
    cin>>ch;

   int intLength =strlen(ch);

   for(int i = 0;i<intLength;i++){
    frequency[ch[i]-'a']++;
   }

    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            cout << char(i + 'a') << " : " << frequency[i] << endl;
        }
    }



    


    return 0;
}