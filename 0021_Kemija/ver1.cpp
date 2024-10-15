#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,c="";
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n;i++){
        c+=s[i];
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            i+=2;
        }
    }
    cout<<c;
    return 0;
}