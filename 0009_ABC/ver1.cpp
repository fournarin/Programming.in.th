#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned short n[3],c=0,a=1000,b=0;
    string s;
    for(int i=0;i<3;i++){
        cin>>n[i];
        if(c<n[i]) c=n[i];
        if(a>n[i]) a=n[i];
    }
    cin>>s;
    for(int i=0;i<3;i++){
        if(n[i]!=a&&n[i]!=c) b=n[i];
    }
    if(b==0){
        if(n[0]==n[1]) b=n[1];
        else if(n[0]==n[2]) b=n[2];
        else if(n[1]==n[2]) b=n[1];
    }
    if(s=="ABC") cout<<a<<" "<<b<<" "<<c;
    else if(s=="ACB") cout<<a<<" "<<c<<" "<<b;
    else if(s=="BCA") cout<<b<<" "<<c<<" "<<a;
    else if(s=="BAC") cout<<b<<" "<<a<<" "<<c;
    else if(s=="CAB") cout<<c<<" "<<a<<" "<<b;
    else cout<<c<<" "<<b<<" "<<a;
    return 0;
}
/*
1. 1 5 3 ABC
2. 6 4 2 CAB
*/