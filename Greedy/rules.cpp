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


  /*

1) Apply Greed
2) Proof Yourself wrong
3) prove yourself correct
 

 lets say i have a bag -> 50 kg (capacity)

 and have 5 metal boxes with respect to weight , price

 Copper (10, 1000), Gold (1, 100000) , Silver (2, 10000), platinum (1, 10^8), iron(50, 2000)


 now applying greed on -> Price/weight

capacity ->50kg
 cutting machine diye packet e dhukaile fractional knapsack

 or na thaakle strick kg hole -0-1 knapsack

25kg -> 200 taka ->400taka->up->8 
30kg -> 300taka -> up -> 10 taka

fractional knapsack hole greedy
*/
    

    return 0;
}