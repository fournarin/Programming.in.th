#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    short a,b;
    cin>>a>>b;
    if(a>b) {
        cout<<2;
        return 0;
    }
    else cout<<ceil(float(b)/a);
    return 0;
}
/*
1.
3 12
---------------
2.
5 23
*/