#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;int a1,a2;
    cin>>a1>>a2;int hrm ;hrm=gcd(a1,a2);long long lcm =(a1*a2/hrm);
    for(int i=0;i<n-2;i++){
        int x;cin>>x;
        hrm = gcd(lcm,x);
        lcm =(x*lcm/hrm);
    }
    cout<<lcm;
    return 0;
}