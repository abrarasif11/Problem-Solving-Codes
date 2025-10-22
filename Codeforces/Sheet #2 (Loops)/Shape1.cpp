#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
int i,j;
for(i = a; i >= 1; i--){
    for(j = 1; j<= i; j++){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}