#include<bits/stdc++.h>
using namespace std;
int main(){
long long p;
cin >> p;
long long first = 0;
long long second = 1;
if(p == 1){
    cout<<first<<endl;
}
else if(p == 2){
    cout<<second<<endl;
}
else{
    for(int i = 3; i <= p; i++){
        long long fibo = first+second;
        first = second;
        second = fibo;
    }
    cout<<second<<endl;
}
return 0;
}