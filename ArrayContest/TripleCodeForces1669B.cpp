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


int freq [200000];
int main() {
    optimize();

 
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        memset(freq, 0, sizeof(freq));
        

      
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int result = -1;
        for(int i = 1;i<=n;i++){
            if(freq[i]>=3){
                result = i;
                break;
            }
        }
        cout<<result <<endl;
    }

    

    return 0;
}