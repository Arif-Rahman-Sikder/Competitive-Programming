#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    while (cin >> row >> col && row != 0 && col != 0)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {

                if ((i + j) % 2 == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
