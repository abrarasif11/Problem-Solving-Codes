#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;

    while (a--)
    {
        string s;
        cin >> s;
        if (s == "abc" || s == "bac" || s == "cba" || s == "acb")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}