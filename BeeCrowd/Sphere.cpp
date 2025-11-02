#include<bits/stdc++.h>
using namespace std;
int main(){

double R,pi,vol;
cin >> R;
pi = 3.14159;
vol = (4.0/3)*pi*(R*R*R);
cout <<fixed<<setprecision(3)<<"VOLUME"<<" = "<<vol<<endl;
return 0;
}