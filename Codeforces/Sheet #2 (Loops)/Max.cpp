#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin >> a;
int Max = 0;
int x;
for(int i = 1; i <= a; i++){
    cin >> x;
    if(x > Max){
        Max = x;
    }
}
    cout<<Max<<endl;
return 0;
}