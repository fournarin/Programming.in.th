#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long x,y; cin>>x>>y;
    if(x>y) cout<<'2';
    else if(y%x==0) cout<<y/x;
    else cout<<y/x+1;
}