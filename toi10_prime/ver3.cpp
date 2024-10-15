#include<bits/stdc++.h>
using namespace std;
#define m 7368788
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    bool prime[m+5]={}; int n; cin>>n;
    for(int i=3;i*i<=m;i+=2)
        if(!prime[i]) for(int j=i+i;j<=m;j+=i) prime[j]=true ;
    if(n==1){  cout<<"2" ; return 0;}
    for(int i=3;true;i+=2) if(!prime[i]) {n--; if(n==1){ cout<<i;break;}}
    return 0;
}