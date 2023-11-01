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
    char c[25];
    cin>>c;
    int temp= c[0];
    int length= strlen(c);
    for(int i=0;i<length;i++){
        int t= c[i]-'0';
        int invert = 9 - t;
        if(invert< t){
            c[i]= invert + '0';
        }
    }
    if(c[0]=='0') {
        c[0]=temp;
    }
    for(int i=0;i<length;i++){
        cout<<c[i];
    }
    return 0;
}