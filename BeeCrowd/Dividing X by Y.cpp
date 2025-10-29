#include<bits/stdc++.h>
using namespace std;
int main(){
double X,Y;
int i,n;
cin >> n;
for(i = 0; i<n; i++){
        cin >>X>>Y;
    if(Y == 0){
            cout<<"divisao impossivel"<<endl;
    }
    else{
        cout<<fixed<<setprecision(1)<<(X/Y)<<endl;
    }

}
return 0;
}