#include<bits/stdc++.h>
using namespace std;
int main(){
 int a;
    cin >> a;
 
    for (int i = 2; i <= a; ++i) {
        bool isPrime = true;
 
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
 
        if (isPrime) {
            cout << i << " ";
        }
    }
 
    cout << endl;
return 0;
}