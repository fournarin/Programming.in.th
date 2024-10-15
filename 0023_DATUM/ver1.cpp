#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s[7]={"Wednesday", "Thursday","Friday","Saturday","Sunday","Monday", "Tuesday"};
    int d,m,sum=0,k,e[11]={31,28,31,30,31,30,31,31,30,31,30};
    cin>>d>>m;
    for(int i=0;i<m-1;i++){
        sum+=e[i];
    }
    sum+=d;
    k=sum%7;
    cout<<s[k];
    return 0;
}