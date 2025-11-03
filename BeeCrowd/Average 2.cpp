#include <bits/stdc++.h>
using namespace std;
int main(){
float A;
float B;
float C;
float avg;
cin >> A;
cin >> B;
cin >> C;
avg = (A*2+B*3+C*5)/(2+3+5);
cout <<fixed<<setprecision(1)<<"MEDIA = "<<avg<< endl;
return 0;
}