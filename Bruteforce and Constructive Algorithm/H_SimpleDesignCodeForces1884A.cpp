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

        int l , r;
        cin>>l >> r;

        while(true){
           ll temp = l;
           int sum = 0;

           while(temp>0){
             sum += temp%10;
             temp=temp/10;
           }
           if(sum % r == 0){
            cout<<l<<endl;
            break;
           }else {
            l++;
           }


        }

     }

    return 0;
}