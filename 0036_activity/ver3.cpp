#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned short n; cin>>n;
    n+=n%2;
    double s=tgamma(n+1)/pow(tgamma(n/2+1),2);
    cout<<fixed<<setprecision(0)<<s;
    return 0;
}
/*
1. 1
2. 2
3. 4
*/