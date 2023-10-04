#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    for (int i = 1; cin >> n && n != 0; i++)
    {
        cout << "Case " << i << ": " << n << endl;
    }

    return 0;
}

//with while loop

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int caseNumber = 1;

    while(cin >> n && n != 0) {
        cout << "Case " << caseNumber << ": " << n << endl;
        caseNumber++;
    }

    return 0;
}


