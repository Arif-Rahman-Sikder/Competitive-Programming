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
        int n , a , b;
        cin>>n>>a>>b;
        int half = n/2;
        int used[101] = {0};
        int perm[101] = {0};
        perm[0] = a;
        perm[half] = b;
        used[a] = 1;
        used[b] = 1;

        int lcount = 1;
        int rcount = 1;

        for(int i = n ;i>=1; i--){
            if(lcount>= half) break;
            if(!used[i] && i>=a){
                perm[lcount] = i;
                used[i] = 1 ;
                lcount++;
            }
        }

        for(int i= 1; i<=n; i++){
            if(rcount>= half) break;
            if(!used[i] && i<= b){
                perm[half + rcount] = i ;
                used [i] = 1;
                rcount++;
            }
            }
            if(lcount < half || rcount< half){
                cout<<-1<<endl;
            }else{
                for(int i = 0 ;i<n ;i++){
                    cout<<perm[i]<<" ";
                }
                cout<<endl;
        }
    }

      

  
    

    return 0;
}