#include<iostream>
using namespace std;
int main() {
    string s;
    int a[]={1,2,3};
    cin>>s;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='A') swap(a[0],a[1]);
        else if(s[i]=='B') swap(a[1],a[2]);
        else swap(a[0],a[2]);
    }
    for(int i=0;i<3;i++){
        if(a[i]==1) cout<<i+1;
    }
}