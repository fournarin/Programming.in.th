#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;int a[n][n];int sumi,sumj,sum1=0,sum2=0;
    set<int>s;
    set<int>s1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            s1.insert(a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        sumi=0;sumj=0;
        for(int j=0;j<n;j++){
            sumi+=a[i][j];
            sumj+=a[j][i];
            if(i==j) sum1+=a[i][j];
            if(i+j==n-1) sum2+=a[i][j];
        }
        s.insert(sumi);
        s.insert(sumj);
    }
    s.insert(sum1);
    s.insert(sum2);
    if(s.size()==1&&s1.size()==n*n) cout<<"Yes";
    else cout<<"No";
	return 0;
}
/*
4
16 2 3 13
5 11 10 8
9 7 6 12
4 14 15 1
*/
