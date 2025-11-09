#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n = 4, m = 12;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
            cout << "*";
        cout << endl;
    }

    for (int i = 0; i < n*2; i++)
    {
        for (int j = 0; j < n; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}