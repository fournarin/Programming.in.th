#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int n,m;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        s.insert((m));
    }
    for(auto x : s){
        v.push_back(x);
    }
    cout<<v[0]<<"\n"<<v[v.size()-1];
}