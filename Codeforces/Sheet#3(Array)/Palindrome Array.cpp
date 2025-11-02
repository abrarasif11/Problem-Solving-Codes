
#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin >> a;
int x[a];
for(int i = 0; i < a; i++){
    cin >> x[i];
}
int i=0,j=a-1,f=0;
while(i<j)
{
   if(x[i]!=x[j]){
    f=1;
    break;
   }
   i++;
   j--;
}
if(f) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
return 0;
}
