#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    int a=1,z,y;
    int b=0;
    int c=1;
    int d=2;
    vector<int>v;
    while(true){
        cin>>x;
        if(x<0){
            break;
        }
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        for(int j=1;j<=v[i];j++){
            a=1;
            x=b;
            z=c;
            b=z;
            c=a+x+z;
        }
        cout<<x+z+a<<" "<<a+b+c<<endl;
        c=1;
        d=2;
        b=0;
    }
}