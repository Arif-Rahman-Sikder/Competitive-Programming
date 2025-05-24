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
     //some tv sets have negetive values
  //can buy any tv set he wants
    //can carry at most m tv sets

    //no desire to go to sale for the 2nd time
    // MAx sum of money bob can earn

    int n, m;
    cin>>n>>m;
    int arr[1001];
    int neg[1001];

    int negCount = 0 ;

    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
        if(arr[i]<0){
            neg[negCount] = arr[i];
            negCount++;
        }
    }

    for(int i = 0 ; i<negCount-1 ; i++){
        for(int j= i+1 ; j<negCount; j++){
            if(neg[i]>neg[j]){
                int temp = neg[i];
                neg[i] = neg[j];
                neg[j] = temp ;
            }
        }
    }

    int sum = 0 ;
    for(int i = 0 ; i < m &&  i< negCount ;i++){
        sum +=neg[i];
    }
    
    cout<< abs(sum)<<endl;





  
    

    return 0;
}