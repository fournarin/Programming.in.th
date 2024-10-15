#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; int maxh[265]={};cin>>n;int x,h,y;
    while(n--){
        cin>>x>>h>>y;
        for(int i=x;i<y;i++) maxh[i]=max(maxh[i],h);
    }
    for(int i=1;i<265;i++){
        if(maxh[i]!=maxh[i-1]) cout<<i<<" "<<maxh[i]<<" ";
    }
    return 0;
}