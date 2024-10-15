#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    int n;
    cin>>n;
    double p=M_PI;
    cout<<fixed<<setprecision(6)<<n*p*n<<"\n"<<2*pow(n,2);
    return 0;
}