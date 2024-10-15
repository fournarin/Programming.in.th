#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m,l,k,c,sum;
    cin>>n>>m>>l>>k>>c;
    vector<int> a;
    for(int i=0;i<n*m;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    sum=accumulate(a.begin(),a.end(),0)+l*k*c;
    if(sum%c!=0) cout<<sum/c+1;
    else cout<<sum/c;
    return 0;
}