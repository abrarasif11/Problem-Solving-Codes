#include<bits/stdc++.h>
using namespace std;
int main(){
int A,B,C,D,sum,sum2;
cin >> A;
cin >> B;
cin >> C;
cin >> D;
sum = C+D;
sum2 = A+B;
if(B > C && D > A && sum > sum2 && C > 0 && D > 0 && A % 2 == 0){
    cout<<"Valores aceitos"<<endl;
}
else{
    cout<<"Valores nao aceitos"<<endl;
}
return 0;
}