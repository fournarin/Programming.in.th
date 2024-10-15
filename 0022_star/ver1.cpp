#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<(n+1)/2;i++){
        for(int j=0;j<(n+1)/2;j++){
            if(i+j==(n+1)/2-1){
                cout<<"*";
               //cout<<i<<j<<" ";
            }else cout<<"-";
            //cout<<i<<j<<" ";
        }
        for(int j=1;j<(n+1)/2;j++){
            if(i==j){
                cout<<"*";
               //cout<<i<<j<<" ";
            }else cout<<"-";
            //cout<<i<<j<<" ";
        }
        cout<<endl;
    }
    //--------------------------------------------
    if(n%2==1){
    for(int i=1;i<(n+1)/2;i++){
        for(int j=0;j<(n+1)/2;j++){
            if(i==j){
                cout<<"*";
               //cout<<i<<j<<" ";
            }else cout<<"-"; 
            //cout<<i<<j<<" ";
        }
        for(int j=1;j<(n+1)/2;j++){
            if(i+j==(n+1)/2-1){
                cout<<"*";
               //cout<<i<<j<<" ";
            }else cout<<"-"; 
            //cout<<i<<j<<" ";
        }
        cout<<endl;
    }
    }
    else {
    for(int i=0;i<(n+1)/2;i++){
        for(int j=0;j<(n+1)/2;j++){
            if(i==j){
                cout<<"*";
               //cout<<i<<j<<" ";
            }else cout<<"-"; 
            //cout<<i<<j<<" ";
        }
        for(int j=1;j<(n+1)/2;j++){
            if(i+j==(n+1)/2-1){
                cout<<"*";
               //cout<<i<<j<<" ";
            }else cout<<"-"; 
            //cout<<i<<j<<" ";
        }
        cout<<endl;
    }
    }

    return 0;
}