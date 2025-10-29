#include<bits/stdc++.h>
using namespace std;
int main(){
double a,b,c,area;
cin >> a;
cin >> b;
cin >> c;
if((a+b)>c&&(b+c)>a&&(c+a)>b){
    cout<<fixed<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;
}
else{
        area = 0.5*(a+b)*c;
    cout<<fixed<<setprecision(1)<<"Area = "<<area<<endl;
}
return 0;
}