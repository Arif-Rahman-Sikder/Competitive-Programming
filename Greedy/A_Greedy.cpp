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
       
    char ch[30];
    cin>>ch;

    for(int i = 0 ; ch[i]!= '\0' ; i++){

    	if(ch[i] >= '5'){
    		if(i == 0 && ch[i] == '9'){
    			continue;
    		}
    			int digit = ch[i] - '0';
    			digit = 9 - digit;
    			ch[i] = '0' + digit;
                
    		
    	}

    }
    cout<<ch<<endl;


  
    

    return 0;
}