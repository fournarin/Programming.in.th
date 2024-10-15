#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n[5][4],m[5]={},max=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cin>>n[i][j];
            m[i]+=n[i][j];
        }
    }
    for(int i=0;i<5;i++){
        if(m[i]>max) max=m[i];
    }
    for(int i=0;i<5;i++){
        if(m[i]==max) {
            cout<<i+1<<" "<<m[i];
            return 0;
        }
    }
}