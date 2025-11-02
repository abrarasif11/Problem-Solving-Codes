#include<bits/stdc++.h>
using namespace std;
int main(){
int a,i;
cin >> a;
int x[a];
for(i = 0; i < a; i++){
    cin >> x[i];
}
for(i = 0; i < a; i++){
    if(x[i] <= 10){
        cout<<"A["<<i<<"]"<<" = "<<x[i]<<endl;
    }
}
return 0;
}