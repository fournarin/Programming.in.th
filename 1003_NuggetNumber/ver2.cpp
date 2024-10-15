#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<ll>s;
    vector<int> v;
    ll n;
    cin>>n;
    for(int i=0;i<n/20+1;i++){
        for(int j=0;j<n/9+1;j++){
            for(int k=0;k<n/6+1;k++){
                ll sum;
                sum=i*20+j*9+k*6;
                s.insert(sum);
            }
        }
    }
    s.erase(0);
    for(auto x :s ){
        v.push_back(x);
    }
    for(auto g : v ){
        if(g<=n) cout<<g<<"\n";
    }
    if(v.size()==0) cout<<"no";
  return 0;
}