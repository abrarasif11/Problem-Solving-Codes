#include<bits/stdc++.h>
using namespace std;
int main(){

string name;
cin >> name;
double fixed_salary,total_sell,total_salary;
cin >> fixed_salary;
cin >> total_sell;
total_salary = fixed_salary + (0.15 * total_sell);
cout <<fixed<<setprecision(2)<<"TOTAL" <<" = " <<"R$ "<< total_salary<< endl;
return 0;
}