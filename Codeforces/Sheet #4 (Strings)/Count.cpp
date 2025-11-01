#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin >> s;
int a = s.length();
int sum = 0;
while(a--){
    sum+= (s[a]-'0');
}
cout<<sum<<endl;
return 0;
}