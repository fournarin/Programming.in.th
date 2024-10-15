#include <iostream>
using namespace std;
int main() {
    int a,b,c,sume;
    cin>>a>>b>>c;
    sume =a+b+c;
    if(sume>=80){
        cout<<"A";
    }
    else if(sume>=75){
        cout<<"B+";
    }
    else if(sume>=70){
        cout<<"B";
    }
    else if(sume>=65){
        cout<<"C+";
    }
    else if(sume>=60){
        cout<<"C";
    }
    else if(sume>=55){
        cout<<"D+";
    }
    else if(sume>=50){
        cout<<"D";
    }
    else {
        cout<<"F";
    }
}