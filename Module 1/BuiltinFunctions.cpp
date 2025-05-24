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

    // swap(): Swaps two variables - O(1)
    int a = 5, b = 10;
    swap(a, b); // a=10, b=5
    cout << "After swap: a = " << a << ", b = " << b << endl;

    double x = 3.14, y = 1.59;
    swap(x, y); // x=1.59, y=3.14
    cout << "After swap: x = " << x << ", y = " << y << endl;

    // max() and min(): Finds maximum and minimum - O(1)
    cout << "Max: " << max(a, b) << endl; // 10
    cout << "Min: " << min(a, b) << endl; // 5

    cout << "Max (double): " << max(x, y) << endl; // 3.14
    cout << "Min (double): " << min(x, y) << endl; // 1.59

    string s1 = "apple", s2 = "banana";
    cout << "Max (string): " << max(s1, s2) << endl; // banana
    cout << "Min (string): " << min(s1, s2) << endl; // apple

    // sqrt() and cbrt(): Square root and cube root - O(1)
    cout << "Square root of 25: " << sqrt(25) << endl; // 5.0
    cout << "Cube root of 27: " << cbrt(27) << endl; // 3.0

    // ceil() and floor(): Ceiling and floor values - O(1)
    double num = 5.7;
    cout << "Ceil of 5.7: " << ceil(num) << endl; // 6
    cout << "Floor of 5.7: " << floor(num) << endl; // 5

    int intNum = -5;
    cout << "Ceil of -5: " << ceil(intNum / 2.0) << endl; // -2
    cout << "Floor of -5: " << floor(intNum / 2.0) << endl; // -3

    // round(): Rounds to the nearest integer - O(1)
    cout << "Round of 5.7: " << round(num) << endl; // 6
    cout << "Round of -5.7: " << round(-num) << endl; // -6

    // reverse(): Reverses a range - O(n)
    string str = "hello";
    reverse(str.begin(), str.end()); // "olleh"
    reverse(&str[0],&str[3]);
    reverse(str, str+3);
    cout << "Reversed string: " << str << endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    reverse(vec.begin(), vec.end());
    cout << "Reversed vector: ";
    for (int i : vec) cout << i << " "; // 5 4 3 2 1
    cout << endl;

    // sort(): Sorts a range - O(n log n)
    int arr[] = {3, 1, 4, 1, 5};
    sort(arr, arr + 5);
    cout << "Sorted array: ";
    for (int i : arr) cout << i << " "; // 1 1 3 4 5
    cout << endl;

    vector<string> fruits = {"apple", "orange", "banana", "grape"};
    sort(fruits.begin(), fruits.end());
    cout << "Sorted fruits: ";
    for (string s : fruits) cout << s << " "; // apple banana grape orange
    cout << endl;

    // max_element() and min_element(): Max and min in a range - O(n)
    cout << "Max element: " << *max_element(arr, arr + 5) << endl; // 5
    cout << "Min element: " << *min_element(arr, arr + 5) << endl; // 1

    // Additional use cases for characters
    cout << "Max char: " << max('a', 'z') << endl; // z
    cout << "Min char: " << min('a', 'z') << endl; // a

    // isupper(), islower(), toupper(), tolower(): Character cases - O(1)
    char ch = 'a';
    cout << "Is 'A' uppercase? " << isupper('A') << endl; // 1 (true)
    cout << "Is 'a' lowercase? " << islower(ch) << endl; // 1 (true)
    cout << "Uppercase 'a': " << (char)toupper(ch) << endl; // 'A'
    cout << "Lowercase 'A': " << (char)tolower('A') << endl; // 'a'

    string text = "Hello World!";
    for (char c : text) {
        if (isupper(c)) cout << (char)tolower(c);
        else if (islower(c)) cout << (char)toupper(c);
        else cout << c;
    }
    cout << endl; // hELLO wORLD!

    // isdigit() and isspace(): Digit and space checks - O(1)
    cout << "Is '5' a digit? " << isdigit('5') << endl; // 1 (true)
    cout << "Is ' ' a space? " << isspace(' ') << endl; // 1 (true)

    string mix = "1a 2b 3c";
    for (char c : mix) {
        if (isdigit(c)) cout << "[Digit: " << c << "] ";
        else if (isspace(c)) cout << "[Space] ";
        else cout << "[Other: " << c << "] ";
    }
    cout << endl;

    // strcat(), strcmp(), strcpy(), strlen(): String manipulations
    char str1[20] = "Hello ";
    char str2[] = "World!";

    // strcat(): Concatenates two strings - O(n + m)
    strcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl; // "Hello World!"

    // strcmp(): Compares two strings - O(n)
    cout << "Comparison of 'abc' and 'abd': " << strcmp("abc", "abd") << endl; // < 0
    cout << "Comparison of 'abc' and 'abc': " << strcmp("abc", "abc") << endl; // 0

    // strcpy(): Copies one string to another - O(n)
    char str3[10];
    strcpy(str3, "copy");
    cout << "Copied string: " << str3 << endl; // "copy"

    // strlen(): Length of a string - O(n)
    cout << "Length of 'Hello': " << strlen("Hello") << endl; // 5

    // __gcd(): Greatest Common Divisor - O(log(min(a, b)))
    cout << "GCD of 36 and 60: " << __gcd(36, 60) << endl; // 12

    // lcm(): Least Common Multiple - O(log(min(a, b)))
    cout << "LCM of 36 and 60: " << lcm(36, 60) << endl; // 180

    return 0;
}
