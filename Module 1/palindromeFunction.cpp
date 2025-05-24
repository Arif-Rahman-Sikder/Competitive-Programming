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

int isPalindrome(char arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        if (arr[start] != arr[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // It's a palindrome
}

int main() {
    optimize();
int n;
    cout << "Enter the number of characters in the string: ";
    cin >> n;
    char arr[n + 1]; // +1 for null character if needed
    cout << "Enter the characters of the string: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isPalindrome(arr, n)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }



    
    return 0;
}