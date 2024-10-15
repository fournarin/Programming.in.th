#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,s1="",c="aeiou";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        for(int j=0;j<5;j++){
            if(s[i]==c[j]) i+=2;
        }
        s1+=s[i];
    }
    cout<<s1;
    return 0;
}
/*
1. zepelepenapa papapripikapa
2. bapas jepe doposapadnapa opovapa kepemipijapa
*/