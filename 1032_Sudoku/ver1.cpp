#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[9][9];
    int k;
    cin>>k;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>a[i][j];
        }
    }
    for(int x=1;x<=k;x++){
    int b[9][9];
    int r[9]={},c[9]={};
    bool chk=true;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<9;i++){
        int sumc=0,sumr=0;
        for(int j=0;j<9;j++){
            sumc+=b[i][j];
            sumr+=b[j][i];
            if(a[i][j]!=0){
                if(a[i][j]!=b[i][j]) chk=false;
            }
        }
        r[i]=sumr;
        c[i]=sumc;
    }
    for(int i=0;i<9;i++){
        if(r[i]!=45 || c[i]!=45) chk=false;
    }
    if(chk) cout<<x<<"\n";
}
cout<<"END";
return 0;
}








/*
2
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9
1 1 1 6 7 8 9 1 2
1 1 1 1 9 5 3 4 8
1 1 1 1 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
*/