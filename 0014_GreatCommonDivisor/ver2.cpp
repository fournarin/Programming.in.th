#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[2];
    cin>>a[0]>>a[1];
    if(a[0]<a[1]) swap(a[0],a[1]);
    for(int i=a[1];i>=1;i--){
        if(a[0]%i==0&&a[1]%i==0){
            cout<<i;
            return 0;
        }
    }
}
/*
1. 12 14
2. 7 3
*/