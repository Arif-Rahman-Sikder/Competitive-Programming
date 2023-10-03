/*
Given array a of N integers. Given Q queries and
in each query given a number X , print count of
that number in array.

Constrainst
1 <= N <= 10^5
1 <= a[i] <= 10^7 ->if array size is 10^9 we cannot use hashing
1 <= Q <= 10^5

*/
//HERE FOR PRE-COMPUTE WE NEED HASHING
#include<bits/stdc++.h>
//(~TheHonestGuy~)
using namespace std;
const int N=1e7+10;
int hsh[N];

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hsh[arr[i]]++;//increase the index value
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        // int cnt=0;
        // for(int i=0;i<n;i++){
        //     if(arr[i]==x){
        //         cnt++;
        //     }
        // }
        cout<<hsh[x]<<endl;
    }
    //O(N)+O(Q*N)=O(N^2)=10^10 -> OLD COMPLEXITY
    //O(N)+O(Q)=O(N)=2*10^5 -> after computation using hashing array
    
    return 0;
}

