#include<bits/stdc++.h>
using namespace std;
int main(){
double x1,y1,x2,y2,A,B,distance;
cin >> x1;
cin >> y1;
cin >> x2;
cin >> y2;
A = (x2-x1)*(x2-x1);
B = (y2-y1)*(y2-y1);
distance = sqrt(A+B);
cout <<fixed<<setprecision(4)<<distance<<endl;
return 0;
}