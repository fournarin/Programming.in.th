#include<bits/stdc++.h>
using namespace std;
bool chk(int n){
    if(n%2==0) return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int m,n;
    string s;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>s;
        if(s=="2") {
            cout<<"T"<<"\n";
            continue;
        }
        n=s[s.length()-1]-'0';
        if(chk(n)) cout<<"T"<<"\n";
        else cout<<"F"<<"\n";
    }
    return 0;
}