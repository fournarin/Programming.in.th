#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]=="2") cout<<"T"<<"\n";
        else if (int(a[i][a[i].length()-1]-'0')%2==1) cout<<"T"<<"\n";
        else cout<<"F"<<"\n";
    }
    return 0;
}