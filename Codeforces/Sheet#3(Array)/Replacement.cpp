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
    if(x[i] > 0){
        x[i] = 1; 
    }
    else if(x[i] < 0){
        x[i] = 2;
    }
}
for(i = 0; i < a; i++){
    cout<<x[i]<<" ";
}
return 0;
}