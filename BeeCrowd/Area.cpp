#include<bits/stdc++.h>
using namespace std;
int main(){

double A,B,C,pi,ART,ARC,TAT,TAS,TAR;
cin >> A;
cin >> B;
cin >> C;
pi = 3.14159;
ART = 0.5 * C * A;
ARC = pi*C*C;
TAT = 0.5 * (A+B) * C;
TAS = B*B;
TAR = A*B;
cout <<fixed<<setprecision(3)<<"TRIANGULO: "<<ART<<endl;
cout <<fixed<<setprecision(3)<<"CIRCULO: "<<ARC<<endl;
cout <<fixed<<setprecision(3)<<"TRAPEZIO: "<<TAT<<endl;
cout <<fixed<<setprecision(3)<<"QUADRADO: "<<TAS<<endl;
cout <<fixed<<setprecision(3)<<"RETANGULO: "<<TAR<<endl;
return 0;
}