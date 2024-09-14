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

const int max = 1000000;
int freq[1000000];
int arr[1000000];

int main() {
    optimize();
 int n;
 cin>>n;
 for(int i = 0;i<n;i++) cin>>arr[i];
 for (int i = 0;i<n;i++){
    freq[arr[i]]++;

 }
 int q ;
 cin>> q;
 while(q--){
    int val;
    cin>> val;
    cout<<"repeated -> " <<freq[val]<<"times"<<endl;
 }
    
    return 0;
}