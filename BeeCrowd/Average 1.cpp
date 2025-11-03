#include<bits/stdc++.h>
using namespace std;
int main(){
float A,B;
cin >> A;
cin >> B;
float avg;
avg = (A * 3.5+B * 7.5)/(3.5+7.5);
cout <<fixed<<setprecision(5)<<"MEDIA = "<<avg<< endl;
return 0;
}