#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int n;
    set<string>s;
    cin>>n;
    for(int i=0;i<n;i++){
        string c;
        cin>>c;
        s.insert(c);
    }
    for(auto x:s){
        cout<<x<<"\n";
        }
    return 0;
}