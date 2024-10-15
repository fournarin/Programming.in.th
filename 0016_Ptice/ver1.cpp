/*• Adrian-- A, B, C, A, B, C, A, B, C, A, B, C,/4
  • Bruno-- B, A, B, C, B, A, B, C, B, A, B, C, ... /2
  • Goran-- C, C, A, A, B, B, C, C, A, A, B, B, .../1*/
#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
    string A="ABC",B="BABC",C="CCAABB",ss;
    string D="ABC",E="BABC",F="CCAABB";
    int o;
    int d;
    int q=0,w=0,e=0;
    int n=0;
    cin>>o;
    for(int i=0;i<o;i++){
    vector<char>g;
        char p ;
        cin>>p;
        ss+=p;
    }
    d =ss.length();
    for(int i=1;i<d/3+1;i++){
        A=A+D;
    }
    for(int i=1;i<d/4+1;i++){
        B=B+E;
    }
    for(int i=1;i<d/6+1;i++){
        C=C+F;
    }
    for(int i=0;i<d;i++){
        if(ss[i]==A[i]){
            q+=1;
        }
        if(ss[i]==B[i]){
            w+=1;
        }
        if(ss[i]==C[i]){
            e+=1;
        }
    }

    //cout<<q<<" "<<w<<" "<<e<<;
    int max;
    if(q>=w&&q>=e){
        max=q;
    }
     if(w>=q&&w>=e){
        max=w;
    }
     if(e>=w&&e>=q){
        max=e;
    }
    cout<<max<<endl;
    if(max==q){
        cout<<"Adrian"<<endl;
    }
     if(max==w){
        cout<<"Bruno"<<endl;
    }
     if(max==e){
        cout<<"Goran"<<endl;
    }
    return 0;
}