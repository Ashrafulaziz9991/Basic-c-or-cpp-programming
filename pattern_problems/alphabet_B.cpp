#include <bits/stdc++.h>
using namespace std;

// this is 8 or B structure

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n = 3, m = 18;
    // int n = 3, m = 15;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "*"; 
        }
        cout << endl;
    }

    // n+2
    for (int i = 0; i < n+2; i++)
    {
        for (int j = 0; j < m/3; j++)
            cout << "*"; 
        for (int j = 0; j < m/3; j++)
            cout << " "; 
        for (int j = 0; j < m/3; j++)
            cout << "*"; 
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "*"; 
        }
        cout << endl;
    }
    for (int i = 0; i < n+2; i++)
    {
        for (int j = 0; j < m/3; j++)
            cout << "*"; 
        for (int j = 0; j < m/3; j++)
            cout << " "; 
        for (int j = 0; j < m/3; j++)
            cout << "*"; 
        cout << endl;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "*"; 
        }
        cout << endl;
    }
    return 0;
}

/*
row = 15, col = 15

***************
***************
***************
*****     *****
*****     *****
*****     *****
*****     *****
***************
***************
***************
*****     *****
*****     *****
*****     *****
*****     *****
*****     *****


*************
**************
***************
*****     ******
*****     ******
*****     ******
*****     ******
****************
**************
****************
*****     ******
*****     ******
*****     ******
*****     ******
****************
***************
**************



*/