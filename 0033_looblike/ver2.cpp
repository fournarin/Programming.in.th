#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>a(10001,0),b;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[x]++;
    }
    b=a;
    sort(a.begin(),a.end());
    int k=a[a.size()-1];
    for(int i=0;i<a.size();i++){
        if(k==b[i])cout<<i<<" ";
    }
    return 0;
}