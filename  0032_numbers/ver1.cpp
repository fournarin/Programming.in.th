#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n],u;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cout<<a[i];
            u=i;
            break;}
    }
    for(int i=0;i<n;i++){
        if(i!=u)cout<<a[i];
    }
    return 0;
}