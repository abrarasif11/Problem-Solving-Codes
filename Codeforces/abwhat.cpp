#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin >> a;
while(a --){
   int x,y;
   char op;
   cin >> x >> op >> y;
   if(op == '+'){
    int sum = x+y;
    cout<<sum<<endl;
   }
}
return 0;
}