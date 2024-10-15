#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    set<int>v;
    vector<int>a;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.insert(x);
    }
    for(int h : v){
        a.push_back(h);
    }
    int y=(a.size())-1;
    cout<<a[0]<<endl;
    cout<<a[y];
}