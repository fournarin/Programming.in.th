#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m[3]={},max=0;
    string s,a[3]={{"ABC"},{"BABC"},{"CCAABB"}};
    string  a1[3]={{"ABC"},{"BABC"},{"CCAABB"}};
    string b[3]={{"Adrian"},{"Bruno"},{"Goran"}};
    cin>>n>>s;
    for(int i=0;i<3;i++){
        for(int j=0;j<(n/a1[i].length()+1);j++){
            a[i]+=a1[i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            if(s[j]==a[i][j]) m[i]++;
        }
    }
    for(int i=0;i<3;i++){
        if(m[i]>max) max=m[i];
    }
    cout<<max<<"\n";
    for(int i=0;i<3;i++){
        if(m[i]==max) cout<<b[i]<<"\n";
    }
    return 0;
}
/*
6
BBAACC
--------------
9 
AAAABBBBB
*/