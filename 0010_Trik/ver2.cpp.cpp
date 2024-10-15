#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned short n[3]={1,2,3};
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A') swap(n[0],n[1]);
        else if(s[i]=='B') swap(n[2],n[1]);
        else swap(n[2],n[0]);
    }
    for(int i=0;i<3;i++){
        if(n[i]==1) cout<<i+1;
    }
    return 0;
}
/*
1. AB
2. CBABCACCC
*/