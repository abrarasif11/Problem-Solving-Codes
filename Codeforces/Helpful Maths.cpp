#include<bits/stdc++.h>
using namespace std;
int main(){
string s1;
cin >> s1;
sort(s1.begin(),s1.end());
for(int i = 0; i<s1.size(); i++){
         if(i == s1.size()-1){
        cout<<s1[i];
    }
    else if(s1[i] != '+')
    {
        cout << s1[i] <<"+";
    }
}
return 0;
}