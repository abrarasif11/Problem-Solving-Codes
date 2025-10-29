#include<bits/stdc++.h>
using namespace std;
int main(){
int d,y,m;
cin >> d;
y = d/365;
m = d % 365/30;
d = d % 365 % 30;
cout <<y<<" ano(s)"<<endl;
cout <<m<<" mes(es)"<<endl;
cout <<d<<" dia(s)"<<endl;
return 0;
}