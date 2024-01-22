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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if( next_permutation(s.begin(),s.end())){
        cout<<s<<endl;
        }
        else cout<<"no answer"<<endl;

    }
    return 0;
}

// using do while loop

/*
string s ="abcd";
int k=0;
int limit=30;
do {
    cout<<s<<endl;
    k++;
    if(k==limit) break;
    while(next_permutation(s.begin(),s.end()));
}
*/