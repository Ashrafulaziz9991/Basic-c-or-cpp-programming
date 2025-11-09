#include <bits/stdc++.h>
using namespace std;
/*
result : 1

A
KK
KKK
AAAA
SSSSS

result : 2

A
AK
AKK
AKKA
AKKAS

*/
int main()
{
    // result
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s = "AKKAS";
    for (size_t i = 0; i < s.size(); i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            cout << s[j] ; // result 2
            // cout << s[i] ; // result 1
        }
        cout << endl;
    }
    
    return 0;
}