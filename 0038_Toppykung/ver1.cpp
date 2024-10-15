#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string> s;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(),s.end()),s.end());
    for(int i=0;i<n;i++){
        cout<<s[i]<<"\n";
    }
    return 0;
}