
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin >> s;
int x = s.length();
for(int i = 0,j = x-1;i < j;i++,j--){
    if(s[i] != s[j]){
        cout<<"NO"<<endl;
        return 0;
    }
}
        cout<<"YES"<<endl;
return 0;
}