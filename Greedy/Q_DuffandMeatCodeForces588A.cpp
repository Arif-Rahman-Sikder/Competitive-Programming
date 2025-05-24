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


    int n;
    cin>>n;

    int total_cost = 0;
    int min_price = 1e9;
    while(n--){
    	int a , p;
    	cin>>a>>p;

    	if(p<min_price){
    		min_price = p ;
    	}

    	total_cost +=a*min_price;

    }
    cout<<total_cost<<endl;

  
    

    return 0;
}