/*
5
1000000
994009
20
59050
524288
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int n[t];
    for(int i=0;i<t;i++){
        cin>>n[i];
    }
    for(int k=0;k<t;k++){
        if(n[k]==1){
            cout<<"NO"<<"\n";
            continue;
        }
    vector<int>v;
    vector<int>a;
    set<int>s;
        v.clear();
        a.clear();
        s.clear();
    while(n[k]%2==0){
        n[k]=n[k]/2;
        v.push_back(2);
    }
    for(int i=3;i<=sqrt(n[k]);i+=2){
        while(n[k]%i==0){
            n[k]=n[k]/i;
            v.push_back(i);
        }
    }
    if(n[k]>1) v.push_back(n[k]);
    for(int x:v){
        s.insert(x);
    }
    for(int x:s){
        a.push_back(x);
    }
    int b,c=0;
    vector<int>v1(s.size());
    for(int i=0;i<a.size();i++){
        for(int j=0;j<v.size();j++){
            if(a[i]==v[j]) v1[i]++;
        }
    }
    b=v1[0];
    for(int x:v1){
        if(x!=b) c++;
    }
    //cout<<"c = "<<c<<"\n";
    if(c==0&&b>1) cout<<b<<"\n";
    else cout<<"NO"<<"\n";
    }
    /*for(int x:v){
        cout<<x<<" ";
    }*/
    return 0;
}