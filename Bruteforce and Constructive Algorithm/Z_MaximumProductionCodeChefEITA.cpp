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

    int t;
    cin>>t;
    while(t--){
    	int d, x, y , z;
    	cin>>d>>x>>y>>z;
    	//1st way -> unit x (everyday) ,
    	// second  way -> unit y (y>x) for d days (d<7), rest, then -> z(z<x)

    	int firstUnit = (x*7);
        int rem = (7-d);
    	int SecondUnit = (y*d) + (z*rem);
    	 if(firstUnit> SecondUnit){
            cout<<firstUnit<<endl;
         }else {
            cout<<SecondUnit<<endl;
         }
    }


  
    

    return 0;
}