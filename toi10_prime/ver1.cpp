#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    bool prime[7368788];
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=7368788;p++){
        if(prime[p]==true){
            for(int i=p*2;i<=7368788;i+=p){
                prime[i]=false;
            }
        }
    }
    for(int i=2;i<7368788;i++){
        if(prime[i]==true) n--;
        if(n==0) {
            cout<<i;
            return 0;
        }
    }
    return 0;
}