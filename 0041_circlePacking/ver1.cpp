#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin>>a;
    if(a%2==0||a==1) {
        if(a%2==0) cout<<a<<".000000";
        else cout<<a+1<<".000000";
        }
    else if(a==3) cout<<fixed<<setprecision(6)<<2+ sqrt(3);
    else cout<<a<<".464102";	
    return 0;
    }