#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    cin>>a;
    int n;
    n=a.length();
    for(int i=0;i<5;i++){
            for(int k=0;k<n;k++){
                if(k%3==0||(k-1)%3==0){
                    //-------------------
                    if(k%3==0&&k!=0){
                        for(int j=1;j<5;j++){
            if(i+j==2||j-i==2||i-j==2||i+j==6){
                cout<<"#";
            }
            else if(i==2&&j==2){
                cout<<a[k];
            }
            else {
                cout<<".";
            }
        }
                    }
                    //*******************************
                    else if((k-1)%3==0&&k!=n-1){
                        for(int j=1;j<4;j++){
            if(i+j==2||j-i==2||i-j==2||i+j==6){
                cout<<"#";
            }
            else if(i==2&&j==2){
                cout<<a[k];
            }
            else {
                cout<<".";
            }
        }
                    }
                    //++++++++++++++++++++++
                    else if(k==0){
                        for(int j=0;j<5;j++){
            if(i+j==2||j-i==2||i-j==2||i+j==6){
                cout<<"#";
            }
            else if(i==2&&j==2){
                cout<<a[k];
            }
            else {
                cout<<".";
            }
        }
                    }
                    else{
                        for(int j=1;j<5;j++){
            if(i+j==2||j-i==2||i-j==2||i+j==6){
                cout<<"#";
            }
            else if(i==2&&j==2){
                cout<<a[k];
            }
            else {
                cout<<".";
            }
        }
                    }
                    
        //--------------------------------------
        }
//*************************************************
        else{
            for(int j=0;j<5;j++){
            if(i+j==2||j-i==2||i-j==2||i+j==6){
                cout<<"*";
            }
            else if(i==2&&j==2){
                cout<<a[k];
            }
            else {
                cout<<".";
            }
        }
        }
            }
        cout<<endl;
    }

    return 0;
}