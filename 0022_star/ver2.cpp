#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int m=(n+1)/2-1,k=(n+1)%2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-k;j++){
            if(i+j==3*m+k||i+j==m||i-j==m+k||j-i==m) cout<<"*";
            else cout<<"-";
        }
        cout<<"\n";
    }
    return 0;
}
/*
1. 4
2. 5
3. 6
*/