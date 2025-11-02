#include<bits/stdc++.h>
using namespace std;
int main(){
int a,i,n,pos=-1;
cin >>a;
int x[a];
for(i = 0; i < a; i++){
    cin >> x[i];
}
cin >> n;
for(i = 0 ; i < a; i++){
    if(x[i] == n){
    pos = i;
    break;
    }
 
}
    cout<<pos<<endl;
return 0;
}