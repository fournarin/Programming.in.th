#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    bool c=false,C=false;
    for(auto x : s) {
        if(int(x)>int('Z')) c=true;
        else C=true;
    }
    if(c&&C) cout<<"Mix";
    else if(c) cout<<"All Small Letter";
    else cout<<"All Capital Letter";
}