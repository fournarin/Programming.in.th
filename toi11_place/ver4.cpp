#include<bits/stdc++.h>
using namespace std;
vector<int>p;
int root(int start){
    if(p[start] ==start || p[start]==0) return start;
    return p[start] = root(p[start]);
}
bool cycle(int u,int v){
    return root(u)!=root(v);
}
void update(int u,int v){
    p[root(u)] = root(v);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;cin>>n>>m;long sum=0;
    p.resize(n+5);
    vector<pair<int,pair<int,int>>>v;
    for(int i=0;i<m;i++){
        int s,d,l;cin>>s>>d>>l;
        v.push_back({l-1,{s,d}});
    }
    sort(v.begin(),v.end());
    for(int i=v.size()-1;i>=0;i--){
        if(cycle(v[i].second.first,v[i].second.second)){
            if(n==1) break;
            n--;
            sum+=v[i].first;
            update(v[i].second.first,v[i].second.second);
        }
    }
    cout<<sum;
    return 0;
}
/*
5
3
2 1
4 3 7
2 0 6 2
4 6 1 5 4
*/