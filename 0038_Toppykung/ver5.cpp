#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string m;
        cin>>m;
        s.insert(m);
    }
    for(auto &x : s) cout<<x<<"\n";
  return 0;
}