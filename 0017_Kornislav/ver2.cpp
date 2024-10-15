#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n[4];
    for(int i=0;i<4;i++){
        cin>>n[i];
    }
    sort(n,n+4);
    cout<<n[0]*n[2];
    return 0;
}
/*
1. 1 2 3 4
2. 4 4 3 4
*/