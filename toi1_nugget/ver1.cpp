#include<bits/stdc++.h>
using namespace std;

set<int>s;
int n;

void nugget(int k){
    if(k<=n) s.insert(k);
    if(k>n) return;
    nugget(k+6);
    nugget(k+9);
    nugget(k+20);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    nugget(0);
    s.erase(0);
    if(s.size()==0) cout<<"no";
    for(auto x:s)cout<<x<<"\n";
    return 0;
}