#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> um;
int main(){
    int t,n,mi=0,mj=0;
    cin>>t>>n;
    long sum=0;
    int s[n],h[n],w[n],o[n];
    for(int r=0;r<n;r++){
        cin>>s[r]>>h[r]>>w[r]>>o[r];
        mi=max(mi,h[r]);
        mj=max(mj,s[r]+w[r]);
    }
    vector<vector<int>>a(mi+10,vector<int>(mj+10,0));
    for(int r=0;r<n;r++){
    for(int i=1;i<1+h[r];i++){
        for(int j=s[r];j<s[r]+w[r];j++){
            um[a[i][j]]--;
            um[a[i][j]+=o[r]]++;
        }
    }}
    cout<<um[t];
    return 0;
}
/*
3 3
1 1 4 1
2 2 2 2
3 3 1 3
*/
/*
2 2
3 2 2 2
1 2 2 2
*/