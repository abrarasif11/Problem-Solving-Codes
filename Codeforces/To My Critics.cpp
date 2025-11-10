
#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin >> a;
for(int i = 0; i < a; i++){
    int x,y,z;
cin >> x >> y >> z;
if(x + y >= 10){
    cout<<"YES"<<endl;
}
else if(x + z >= 10){
    cout<<"YES"<<endl;
}
else if(y + z >= 10){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}