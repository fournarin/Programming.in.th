#include<bits/stdc++.h>
using namespace std;
int main(){
    bool f = true ;
    int n,m;
    cin>>n>>m;
    if(n==1) n++;
    bool prime[1001];
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=1000;p++){
        if(prime[p]==true){
            for(int i=p+p;i<=1000;i+=p){
                prime[i]=false;
            }
        }
    }
    for(int i=n;i<=m;i++){
        int n=sqrt(i);
        if(int(sqrt(i))==sqrt(i)){
            if(prime[n]==true){
                cout<<i<<" ";
                f=false;
            }
        }
    }
    if(f) cout<<"-1";
    return 0;
    
}
