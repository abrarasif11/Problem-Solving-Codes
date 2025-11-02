#include<bits/stdc++.h>
using namespace std;
int main(){
int a,i;
cin >> a;
int x[a];
int value;
int pos;
for(i = 0; i < a; i++){
    cin >> x[i];
}
    value = x[0];
    pos = 1;
for(i = 0; i < a; i++){
    if(x[i] < value){
        value = x[i];
        pos = i+1;
    }
}
     cout<<value<<" "<<pos<<endl;
return 0;
}