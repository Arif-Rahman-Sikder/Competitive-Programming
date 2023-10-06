#include<bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main(){
    int a, b;
    cin>>a >>b;
    int cnt=1;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++ ){
          cout<<i<<j<<" , ";
        }
        cout<<endl;
    }
    return 0;
}