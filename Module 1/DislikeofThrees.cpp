#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    int t;
    cin >> t;
while(t--){
    int a;
    cin>>a;
    int i=1;
    int cnt=0;
    while(1){
        if(i%3!=0 && i%10!=3){
            cnt++;
            if(cnt==a){
                cout<<i<<endl;
                break;
            }
        }
        i++;
    }
}

    return 0;
}