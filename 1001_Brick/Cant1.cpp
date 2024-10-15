//ไม่สมบูรณ์
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[m],count=0;
    string c[n];
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for(int j=0;j<m;j++){
        cin>>a[j];
    }
    for(int j=0;j<m;j++){
        count=0;
        for(int i=0;i<n;i++){
            if(c[i][j]=='O'){
                for(int k=1;k<=a[j];k++){
                c[i-k][j]='#';
                count++;
                }
                goto jump;
            }
        }
        if(count==0){
            for(int k=1;k<=a[j];k++){
                c[n-k][j]='#';
            }
        }
        jump:;
    }
    for(int i=0;i<n;i++){
        cout<<c[i]<<"\n";
    }
    return 0;
}