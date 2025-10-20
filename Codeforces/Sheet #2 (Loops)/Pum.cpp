#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin >>a;
int x = 1, y = 2, z = 3;
for(int i = 0; i < a; i++,x+=4,y+=4,z+=4){
    cout<<x<<" "<<y<<" "<<z<<" "<<"PUM"<<endl;
}
return 0;
}