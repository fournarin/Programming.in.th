#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int n,m;
    cin>>n;
    m=n;
    n+=n%2;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n-((n+1)%2);j++){
            if(i+j==(n-((n+1)%2))/2) cout<<"*";
            else if(j-i==(n-((n+1)%2))/2) cout<<"*";
            else cout<<"-";
        }
        cout<<"\n";
    }
    for(int i=n/2-1-(m%2);i>=0;i--){
        for(int j=0;j<n-((n+1)%2);j++){
            if(i+j==(n-((n+1)%2))/2) cout<<"*";
            else if(j-i==(n-((n+1)%2))/2) cout<<"*";
            else cout<<"-";
        }
        cout<<"\n";
    }
    return 0;
}