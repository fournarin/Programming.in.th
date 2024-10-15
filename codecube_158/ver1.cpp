#include<bits/stdc++.h>
using namespace std;

int main(){
    bool f = true ;
    int n,m;
    cin>>n>>m;
    bool prime[1001];
    int a[1000010]={};
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=1000;p++){
        if(prime[p]==true){
            for(int i=p+p;i<=1000;i+=p){
                prime[i]=false;
            }
        }
    }
    a[4]++;
    for(int i=3;i<1000;i+=2){
        if(prime[i]==true) a[i*i]++;
    }
    for(int i=n;i<=m;i++){
        if(a[i]==1){
            cout<<i<<" ";
            f=false;
        }
    }
    if(f) cout<<"-1";
    return 0;
    
}