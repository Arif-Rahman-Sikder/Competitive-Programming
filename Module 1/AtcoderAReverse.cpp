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

int main() {
    optimize();
    
    int l, r;
    cin >> l >> r;
    
    char c[200100];
    cin >> c;
    
    int ln = 0;
    while (c[ln] != '\0') ln++; // Get the length of the string
    
    l-- ;
    r--;
  for ( int i = l, j = r ; i<j ; i++ , j--){
            int temp = c[i];
            c[i] = c[j];
            c[j] = temp; 
  }
    cout << c << endl;

    return 0;
}




/*
//for substring reversal
for (int i = 0; i < (r - l + 1) / 2; i++) {  
    int temp = c[r - i];  
    c[r - i] = c[l + i];  
    c[l + i] = temp;  
}
*/

  /*
    cout<<ln<<endl;
  //normal reverse 
    for(int i = 0 ; i<ln/2 ; i++){
        int temp = c[ln-i-1];
        c[ln-i-1] = c[i];
        c[i] = temp ;
      
    }
    */



    