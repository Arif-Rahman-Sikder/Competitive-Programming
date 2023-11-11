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

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    int index = max_element(arr.begin(), arr.end())-arr.begin();

    return index;
    }
};

int main() {
    optimize();
    
    return 0;
}