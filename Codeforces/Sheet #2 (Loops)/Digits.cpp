#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        reverse(s.begin(),s.end());
        for(int i = 0; i<s.size();i++){
            cout<< s[i] <<" ";
        }
        cout<<endl;
    }
    return 0;
}