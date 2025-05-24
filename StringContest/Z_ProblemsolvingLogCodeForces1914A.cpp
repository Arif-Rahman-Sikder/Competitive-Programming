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


s
int main() {
    optimize();
 
    int t;
    cin>>t;
 

    while(t--){
        int freq[26] = {0}; 
    	int n;
    	cin>>n;
    	
        char ch[100000];
        cin>>ch;

        for(int i = 0 ; i<n;i++){
            freq[ch[i] - 'A']++;
        }

        int sol =0 ;
        for(int i = 0 ;i<26 ; i++){
            if(freq[i] >= (i+1)){
                sol++;
            }
        }

   cout<<sol<<endl;

        
         

 
    }

  
    

    return 0;
}