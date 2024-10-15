#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int idi[] = { 0, 1, 1, 1, 0,-1,-1,-1};
    int idj[] = { 1, 1, 0,-1,-1,-1, 0, 1};
    int m,n;cin>>n>>m; string s[n];int sum=0;
    for(int i=0;i<n;i++) cin>>s[i];
    stack<pair<int,int>> v;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]=='1'){
                sum++;
                v.push({i,j});
                s[i][j]='0';
                while(!v.empty()){
                    int tmpi = v.top().first;
                    int tmpj = v.top().second;
                    v.pop();
                    for(int k=0;k<8;k++){
                        int x = tmpi+idi[k];
                        int y = tmpj+idj[k];
                        if(x>=0&&x<n&&y>=0&&y<m){
                        if(s[x][y]=='1'){
                            v.push({x,y});
                            s[x][y]='0';
                        }
                    }
                    }
                }
            }
        }
    }/*
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<s[i][j];
        }cout<<"\n";
    }*/
    cout<<sum;
    return 0;
}
/*
4 5
10011
00001
01100
10011
*/
/*
4 4
0010
1010
0100
1111
*/
/*
5 6
101001
011100
000000
101000
000000
*/
/*
4 3
001
000
001
001
*/