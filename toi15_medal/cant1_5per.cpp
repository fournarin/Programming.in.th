#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,sum=0;
    cin>>n;
    ll a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        c[i]=a[i]+b[i];
    }
    sort(c,c+n);
    for(int i=n-1;i>0;i--){
        sum+=abs(c[i]-c[i-1]);
    }
    cout<<sum;
  return 0;
}