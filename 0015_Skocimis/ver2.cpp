#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x[3];
    set<int>s;
    vector<int>v;
    for(int i=0;i<3;i++){
        cin>>x[i];
    }
    s.insert(abs(x[1]-x[0]));
    s.insert(abs(x[1]-x[2]));
    for(int c:s){
        v.push_back(c);
    }
    cout<<v[v.size()-1]-1;
    return 0;
}
/*
1. 2 3 5
2. 3 5 9
*/