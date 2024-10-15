#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c;
    d=a+b+c;
    if(d>=80) cout<<"A";
    else if(d>=75) cout<<"B+";
    else if(d>=70) cout<<"B";
    else if(d>=65) cout<<"C+";
    else if(d>=60) cout<<"C";
    else if(d>=55) cout<<"D+";
    else if(d>=50) cout<<"D";
    else cout<<"F";
    return 0;
}