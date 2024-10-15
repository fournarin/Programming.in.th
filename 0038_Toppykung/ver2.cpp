#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string>v;
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n);
    for(int i=0;i<n;i++){
        if(s[i]!=s[i-1]) v.push_back(s[i]);
    }
    for(auto x:v){
        cout<<x<<"\n";
    }
    return 0;
}
/*
1.
4
toppykung
krittisakchaiyakul
noob
nakornpathom
--------
2.
6
mai
hen
longsob
ma
pid
sala
------------
3.
6
maidai
leoi
maidai
tong
maidai
nakornpathom
*/