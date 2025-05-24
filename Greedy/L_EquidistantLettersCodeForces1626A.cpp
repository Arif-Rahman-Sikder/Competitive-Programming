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
        char s[60];
        cin>>s;
        int freq[26] ={0};
        int len = 0;
        while(s[len] != '\0'){
            freq[s[len]- 'a']++;
            len++;

        }
        char result[60];
        int idx = 0;

        for(int i = 0 ;i< 26 ;i++){
            if(freq[i] == 2){
                result[idx] = 'a' + i;
                idx++;
                result[idx] = 'a' + i;
                idx++;
            }
        }

        for(int i = 0 ;i<26 ;i++){
            if(freq[i] == 1 ){
                result[idx] = 'a'+i;
                idx++;
            }
        }
        result[idx] = '\0';
        cout<<result<<endl;
     }

  
    

    return 0;
}