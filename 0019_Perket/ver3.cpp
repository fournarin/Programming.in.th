#include<bits/stdc++.h>
using namespace std;
int n;
int f[12];
int g[12];
int mini=INT_MAX;

void solv(int i,int b,int s){
    if(i==n) {
        if(s!=0) mini=min(mini,abs(b-s));
    }
    else {
    solv(i+1,b,s);
    solv(i+1,b*f[i],s+g[i]);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++) cin>>f[i]>>g[i];
    solv(0,1,0);
    cout<<mini;
    return 0;
}