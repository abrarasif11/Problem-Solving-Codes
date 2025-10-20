#include <bits/stdc++.h>
using namespace std;
#define p cout <<
#define el << endl
#define nl cout << endl
#define in insert
#define pb push_back
#define bn begin()
#define en end()
#define mnel min_element
#define mxel max_element
#define ll long long
#define sz size()
#define test   \
    int tc;    \
    cin >> tc; \
    while (tc--)

typedef vector<int> IV;
typedef vector<IV> VIV;
typedef vector<string> SV;
typedef pair<int, int> IP;
typedef vector<IP> VIP;
typedef map<int, int> IMP;
typedef set<int> ISET;
typedef set<char> ChSET;

int main()
{
    test
    {
        int x;
        cin >> x;
        double sum = 0;
        for (int i = 0; i < x; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }
        if (sqrt(sum) == floor(sqrt(sum)))
            p "Yes" el;
        else
            p "No" el;
    }
    return 0;
}
