#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]=="2"||(s[i][s[i].length()-1]-'0')%2==1) cout<<"T"<<"\n";
        else cout<<"F"<<"\n";
    }
}