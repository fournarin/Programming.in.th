#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int sum=-100,n[9];
    for(int i=0;i<9;i++){
        cin>>n[i];
        sum+=n[i];
    }
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(n[i]+n[j]==sum) {
                n[i]=0;
                n[j]=0;
                break;
            }
        }
    }
    for(int i=0;i<9;i++){
        if(n[i]!=0) cout<<n[i]<<"\n";
    }
    return 0;
}
/*
1. 
7
8
10
13
15
19
20
23
25

2.
8
6
5
1
37
30
28
22
36
*/