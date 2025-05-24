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

int power(int a , int b){
	int f = 1;
	for(int i =0;i<b;i++){
		f*=a;
	}
	return f;
}

int main() {
    optimize();

    int  a , b;
    cin>> a >>b;
    int res = power(a, b);
    cout<<res;
    
    return 0;
}