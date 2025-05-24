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

    int n;
    cin>>n;
    char s[105];
    cin>>s;

    int freq[26] = {0};
    int length = 0;

    for(int i = 0 ; s[i]!= '\0'; i++){
        length++;
        freq[s[i]-'A']++;
    }

    int tgFreq[26][26] ={0};
    for(int i = 0 ; i<length-1 ;i++){
        int a = s[i] -'A';
        int b = s[i+1] -'A';
      tgFreq[a][b]++;

    }
  
  int maxFreq = 0;
  int bestA = 0 , bestB = 0;

  for(int i = 0 ;i<26 ;i++){
    for(int j = 0 ; j<26 ;j++){
      if(tgFreq[i][j] > maxFreq){
        maxFreq = tgFreq[i][j];
        bestA = i;
        bestB = j;

       }  
    }
  }
  

  cout<< (char)(bestA + 'A') <<(char)(bestB + 'A')<<endl;
    

    return 0;
}