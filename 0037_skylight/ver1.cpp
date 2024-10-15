#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m,l,k,c,sum;
    cin>>n>>m>>l>>k>>c;
    int a[n][m];
    sum=l*k*c;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            sum+=a[i][j];
        }
    }
    if(sum%c!=0) cout<<sum/c+1;
    else cout<<sum/c;
    return 0;
}