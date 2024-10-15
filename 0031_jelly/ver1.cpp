#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int a,b,c,count=0;
    cin>>a>>b>>c;
    while(a/2!=1){
        count++;
        a/=2;
    } if(a/2==1) count++;
    while(b/2!=1){
        count++;
        b/=2;
    }if(b/2==1) count++;
    while(c/2!=1){
        count++;
        c/=2;
    }if(c/2==1) count++;
    cout<<count;
    return 0;
}