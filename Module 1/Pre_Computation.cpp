/*Given T test cases and in each
test case a number N.Print its factorial for
each test case % M
where M = 10^9+7.

Constraints
1 <= T <= 10^5
1 <= N <= 10^5 
*/


#include<bits/stdc++.h>
//ARIF RAHMAN SIKDER(THEHONESTGUY-> with big dreams)
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
long long fact[N];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++){
         fact[i]=fact[i-1]*i;
    }
 int t ;
 cin>>t;
 while(t--){
//    int fact=1;
    int n;
    cin>>n;
    // for(int i=2;i<=n;i++){
    //     fact=(fact*i)%M;
    // }
    cout<<fact[n]<<endl;
 }
//O(T*N)||O(N^2)=10^10 OLD complexity
//O(N)+O(T)=10^5 +10^5//new complexity after pre compute
    return 0;
}

