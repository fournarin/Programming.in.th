#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n+1,0);
    for(int i=2;i<=n;i++){
    for(int j=i;j<=n;j+=i){
        if(v[j]==0) {
            v[j]++;
            k--;
            if(k==0){
                cout<<j;
                return 0;
            }
        }
    }
    }
}