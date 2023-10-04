#include<bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    ll int cnt=0;
    int max=1000000+123;
    int min=-1000000-123;
    while(t--){
       ll int n;
        cin>>n;
       if(n<max){
        max=n;
       }
       if(n>min){
        min=n;
       }
       cnt+=n;

    }
    cout<<max<<" "<<min<<" "<<cnt<<endl;
    return 0;
}