#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    set<int>s;
    vector<int>v;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++) s.insert(a[i]);
    
    int b[s.size()+1];
    
    memset(b,0,sizeof(b));
    for(int x : s){
        v.push_back(x);
    }
    for(int i=0;i<s.size();i++){
        for(int j=0;j<n;j++){
            if(v[i]==a[j]) b[i]++;
        }
    }
    int max=b[0];
    for(int i=0;i<s.size();i++){
        if(max<b[i+1]) max=b[i+1];
    }
    for(int i=0;i<s.size();i++){
        if(b[i]==max) {
            cout<<v[i]<<" ";
        }
    }
    
    return 0;
}