#include<bits/stdc++.h>
using namespace std;
int main(){
int X,Y;
double x1,x2,x3,x4,x5,ans;
cin >> X;
cin >> Y;
x1 = 4.00;
x2 = 4.50;
x3 = 5.00;
x4 = 2.00;
x5 = 1.50;
ans = 0;
if(X == 1){
    ans = (x1*Y);
}
else if(X == 2){
    ans = (x2*Y);
}
else if(X == 3){
    ans = (x3*Y);
}
else if(X == 4){
    ans = (x4*Y);
}
else if(X == 5){
    ans = (x5*Y);
}
cout <<fixed<<setprecision(2)<<"Total: R$ "<<ans<<endl;
return 0;
}