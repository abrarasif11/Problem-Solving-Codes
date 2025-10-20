#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while (t--) {
        string s1;
        cin >> s1;
        int A = 0, B = 0;
        for (char c : s1) {
            if (c == 'A')
                A++;
            else
                B++;
        }
        if (A > B)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
return 0;
}