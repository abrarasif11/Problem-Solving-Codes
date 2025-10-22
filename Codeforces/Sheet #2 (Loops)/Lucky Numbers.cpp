#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    int c = 0;
    cin >> a >> b;
    for(int i = a; i <=b; i++){
        bool x = 0;
        int n = i;
        while(n!= 0){
            short digit = n%10;
            n/=10;
            if(digit!=7 && digit!=4){
                x = 1;
            }
        }
        if(x == 0){
            cout<<i<<" ";
            c++;
        }
    }
    if(c == 0){
        cout<<-1<<endl;
    }
    return 0; 
}