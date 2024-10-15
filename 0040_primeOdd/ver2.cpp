#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
    if(s[i]=="2") cout<<"T"<<"\n";
    else if((s[i][s[i].length()-1]-'0')%2==0) cout<<"F"<<"\n";
    else cout<<"T"<<"\n";
    }
    return 0;
}
/*
3
8
7
5
*/