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
    bool canMakeArithmeticProgression(std::vector<int>& arr) {
        std::sort(arr.begin(), arr.end());

        int commonDifference = arr[1] - arr[0];

        for (int i = 2; i < arr.size(); ++i) {
            int currentDifference = arr[i] - arr[i - 1];
            if (currentDifference != commonDifference) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    optimize();
    
    return 0;
}