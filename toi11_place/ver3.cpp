#include<bits/stdc++.h>
using namespace std;
vector<int> p(200005,0);
int root(int u){
    if(p[u]==u||p[u]==0) return u;
    return p[u]=root(p[u]);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long sum=0;
    int n,m;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>> v;
    for(int i=0;i<m;i++){
        int u,e,l;
        cin>>u>>e>>l;
        v.push_back({l-1,{u,e}});
    }
    sort(v.begin(),v.end());
    for(int i=m-1;i>=0;i--){
        int a,b,c;
        a=v[i].second.first;
        b=v[i].second.second;
        c=v[i].first;
        if(root(a)!=root(b)){
            n--;
            if(n==0) break;
            sum+=c;
            p[root(a)]=root(b);
        }
    }
    cout<<sum;
    return 0;
}
/*
6 9
1 2 8
2 3 6
1 4 6
4 2 6
4 5 8
2 5 7
5 6 5
2 6 9
3 6 5
*/