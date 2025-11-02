#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,i,sum = 0;
cin >> a;
long long x[a];
for(i = 0;i< a;i++){
    cin >> x[i];
}
for(i = 0;i< a;i++){
    sum = sum+x[i];
}
    cout<<abs(sum)<<endl;
return 0;
}