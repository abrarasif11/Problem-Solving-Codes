#include<bits/stdc++.h>
using namespace std;
int main(){
int a,i;
cin >> a;
int x[a];
for(i = 0; i < a; i++){
    cin >> x[i];
}
sort(x,x+a);
for(i = 0; i < a; i++){
    cout<<x[i]<<" ";
}
return 0;
}