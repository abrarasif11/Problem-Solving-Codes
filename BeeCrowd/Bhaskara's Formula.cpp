#include<bits/stdc++.h>
using namespace std;
int main(){
double a,b,c,p,q,R1,R2;
cin>>a;
cin>>b;
cin>>c;
p = ((b*b)-4*a*c);
if((p < 0 || a == 0)){
    cout<<"Impossivel calcular"<<endl;
}
else{
q = sqrt(p);
R1 = ((-b+q)/(2*a));
R2 = ((-b-q)/(2*a));
cout<<fixed<<setprecision(5)<<"R1 = " <<R1<<endl;
cout<<fixed<<setprecision(5)<<"R2 = " <<R2<<endl;
}

return 0;
}