#include<bits/stdc++.h>
using namespace std;
int main(){
int a,i;
cin >> a;
int x[a];
for(i = 0; i < a; i++){
    cin >> x[i];
}
int m,count=0;
m = *min_element(x,x+a);
for(i = 0; i < a; i++){
    if(m == x[i]){
        count++;
    }
}
    if(count % 2){
        cout<<"Lucky"<<endl;
    }
    else{
        cout<<"Unlucky"<<endl;
    }
return 0;
}