#include<bits/stdc++.h>
using namespace std;
int main(){
int first = 0,second = 1,sum;
int a;
cin >> a;
while(a--){
    cout<<first<<" ";
    sum = first+second;
    first = second;
    second = sum;
}
return 0;
}