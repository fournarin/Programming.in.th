#include<bits/stdc++.h>
using namespace std;
#define m 8000000
int main(){
    bool prime[m+5]={};
    for(int i=2;i*i<=m;i++)
        if(!prime[i])
            for(int j=i+i;j<=m;j+=i)
                prime[j]=true;
    int n; cin>>n;
    if(n==1) {cout<<"2";return 0;}
    n--;
    for(int i=3;true;i+=2)
        if(!prime[i]) {n--;
            if(n==0) {cout<<i;break;}}
    return 0;
}