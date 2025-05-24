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
    int toInt;
    char ch[1000010];
    cin>>ch;
    int count = 0;
    int length = strlen(ch);
    
    for(int i = 0 ;i<length;i++){
        toInt = ch[i] - '0'; 
         count+= toInt;
           
    }

    cout<<count <<endl;


    return 0;
}