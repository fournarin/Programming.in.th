#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n==1||n==2) {cout<<2;return 0;}
    if(n%2==1) n++;
    double s=tgamma(n+1)/pow(tgamma(n/2+1),2);
    cout<<fixed<<setprecision(0)<<s;
    return 0;
}