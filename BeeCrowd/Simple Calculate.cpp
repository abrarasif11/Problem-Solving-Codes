#include<bits/stdc++.h>
using namespace std;
int main(){
double a,x,total,b,c,y,z;
cin >> a;
cin >> b;
cin >> c;
a = b*c;
cin >> x;
cin >> y;
cin >> z;
x = y*z;
total = a+x;
cout <<fixed<<setprecision(2)<<"VALOR A PAGAR:"<< " R$ "<< total<< endl;
return 0;
}