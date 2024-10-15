#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool a=true,b=true;
    for(char c : s){
        if(!isupper(c)) a=false ;
    }
    for(char c : s){
        if(!islower(c)) b=false ;
    }
    if(a) cout<<"All Capital Letter";
    else if(b) cout<<"All Small Letter";
    else cout<<"Mix";
}