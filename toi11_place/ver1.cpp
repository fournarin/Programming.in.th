#include<bits/stdc++.h>
using namespace std;

vector<int> p(200005,0);

int root(int start){
    if(p[start] == start||p[start]==0) return start;
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
    int n,m;
    long double sum=0;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>> v;

    for(int i=0;i<m;i++){
        int s,d,l;
        cin>>s>>d>>l;
        v.push_back({l-1,{s,d}});
    }

    sort(v.begin(),v.end());
    
    for(int i=m-1;i>=0;i--){
        if(cycle(v[i].second.first, v[i].second.second)){
            n--;
            if(n==0) break;
        sum+=v[i].first;
        /*cout<<v[i].second.first<<" "<<v[i].second.second<<" "<<v[i].first<<" sum = "<<sum<<"\n";*/
        update(v[i].second.first, v[i].second.second);
        }
    }
    cout<<fixed<<setprecision(0)<<sum;
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