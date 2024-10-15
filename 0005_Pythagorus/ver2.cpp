#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,d;
    cin>>a>>b;
    c=pow(a,2)+pow(b,2);
    d=sqrt(c);
    cout<<fixed<<setprecision(6)<<d;
}