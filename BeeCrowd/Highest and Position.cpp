#include<bits/stdc++.h>
using namespace std;
int main(){
int x,i,high = 0, pos = 0;
for(i = 0;i < 100; i++){
        cin >> x;
    if(x > high){
        high = x;
        pos = i;
    }
}
    cout<<high<<endl;
    cout<<pos+1<<endl;
return 0;
}