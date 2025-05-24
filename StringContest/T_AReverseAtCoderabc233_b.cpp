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

    int l , r;
    cin>>l >>r;

    char ch[100100];
    l--, r--;
    cin>>ch; 
    for(int i = l; i<=(l+r)/2 ; i++){
       
       int temp = ch[l];
       ch[l] = ch[r];

       ch[r] = temp ;
  
         l++;
        r--;
    }
  

   
    cout<<ch;
    


    

    return 0;
}

    //formula r-(i-l)


//2nd approach 
