
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n;
        cin >> n;
        int x[n];
        int mini = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
            if (x[i] < x[mini])
            {
                mini = i;
            }
        }
        x[mini] += 1;
        int p = 1;
        for (int i = 0; i < n; i++)
        {
            p *= x[i];
        }
        cout << p << endl;
    }
    return 0;
}