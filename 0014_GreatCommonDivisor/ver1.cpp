#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,q,r;
    cin>>a>>b;
    while(b!=0){
        q=a/b;
        r=a-q*b;
        a=b;
        b=r;
    }
    cout<<a<<endl;
}