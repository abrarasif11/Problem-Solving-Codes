#include<bits/stdc++.h>
using namespace std;
int main(){

int A,B,C,max;
cin >> A;
cin >> B;
cin >> C;
max = A;
   if( B > max)
    max = B;
   if(C > max)
    max = C;
cout <<max<<" eh"<<" o"<<" maior"<<endl;
return 0;
}