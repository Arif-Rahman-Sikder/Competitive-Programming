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
    
     // Declaration of a vector
    vector<int> v;

    // Adding elements to the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Output the elements of the vector
    cout << v[0] << " " << v[1] << " " << v[2] << endl; // 1 2 3

    // Modifying an element in the vector
    v[1] = 3;
    cout << v[0] << " " << v[1] << " " << v[2] << endl; // 1 3 3

    // Output the size of the vector
    cout << v.size() << endl; // 3

    // Output the elements of the vector using a loop
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; // 1 3 3
    cout << endl;

    // Initializing a vector with values
    vector<int> v1 = {2, 3, 4};

    // Output the size of the vector
    cout << v1.size() << endl; // 3

    // Output the elements of the vector using a loop
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; // 2 3 4
    cout << endl;

    // Clearing the vector
    v.clear();
    cout << v.size() << endl; // 0
    cout << v.empty() << endl; // 1
    cout << v1.empty() << endl; // 0

    // Resizing a vector
    v1.resize(5);
    cout << v1.size() << endl; // 5
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; // 2 3 4 0 0
    cout << endl;

    // Initializing a vector with a specified size
    vector<int> a(5);
    cout << a.size() << endl; // 5
    for (int i = 0; i < a.size(); i++) 
        cout << a[i] << " "; // 0 0 0 0 0
    cout << endl;

    // Assigning the values of one vector to another
    a = v1;
    for (auto u : a) 
        cout << u << " "; // 2 3 4 0 0
    cout << endl;

    // Using iterators to traverse a vector
    vector<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++) 
        cout << *it << " "; // 2 3 4 0 0
    cout << endl;

    // Sorting a vector in ascending order
    a = {3, 4, 5, 1, 2};
    sort(a.begin(), a.end());
    for (auto u : a) 
        cout << u << " "; // 1 2 3 4 5
    cout << endl;

    // Sorting a vector in descending order
    sort(a.rbegin(), a.rend());
    for (auto u : a) 
        cout << u << " "; // 5 4 3 2 1
    cout << endl;

    // Sorting a vector using a custom comparator for descending order
    a = {3, 4, 5, 1, 2};
    sort(a.begin(), a.end(), greater<int>());
    for (auto u : a) 
        cout << u << " "; // 5 4 3 2 1
    cout << endl;

    // Reversing the elements of a vector
    a = {3, 4, 5, 1, 2};
    reverse(a.begin(), a.end());
    for (auto u : a) 
        cout << u << " "; // 2 1 5 4 3
    cout << endl;

    // Accessing the last element of a vector
    cout << a.back() << endl; // 3

    // Removing the last element from a vector
    a.pop_back();
    cout << a.back() << endl; // 4

    // Initializing a vector and accessing its first element
    a = {3, 4, 5, 1, 2};
    cout << *a.begin() << endl; // 3

    // Erasing an element from a vector
    a.erase(a.begin());
    for (auto u : a) 
        cout << u << " "; // 4 5 1 2
    cout << endl;

    // Erasing an element at a specific position in a vector
    a.erase(a.begin() + 2);
    for (auto u : a) 
        cout << u << " "; // 4 5 2
    cout << endl;

    // Removing consecutive duplicate elements from a vector
    a = {1, 1, 2, 2, 2, 3, 3};
    unique(a.begin(), a.end());
    for (auto u : a) 
        cout << u << " "; // 1 2 3 2 2 3 3
    cout << endl;

    // Getting the number of unique elements in a vector
    a = {1, 1, 2, 2, 2, 3, 3};
    int n = unique(a.begin(), a.end()) - a.begin();
    cout << n << endl; // 3
    for (int i = 0; i < n; i++) 
        cout << a[i] << " "; // 1 2 3
    cout << endl;

    // Finding the index and value of the maximum element in a vector
    a = {2, 3, 1, 5};
    cout << max_element(a.begin(), a.end()) - a.begin() << endl; // 3
    cout << *max_element(a.begin(), a.end()) << endl; // 5
    return 0;
}