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
        int n,k;
        cin>>n>>k;
        char ch[200005];
        cin>>ch;

        int cnt = 0;
        for(int i = 0 ; i<n; i++){
            if(ch[i] == 'B'){
                cnt++;
                int end = i+k;
                if (end>n){
                    end =n;

                }
         for(int j = i ; j<end; j++){
            ch[j] = 'w';
         }
         i = end -1;
        
            
        }
        
    }
     cout<<cnt<<endl;
}
    
    

    return 0;
}