#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> numbers;
    int num;
    int A,B,C;
    string a;
    for(int i=0;i<3;i++){
        cin>>num;
        numbers.push_back(num);
    }
    sort(numbers.begin(),numbers.end());
    for(int q=0;q<3;q++){
        if(q==0){
            A=numbers[q];
        }
        if(q==1){
            B=numbers[q];
        }
        if(q==2){
            C=numbers[q];
        }
    }
     cin>>a;
    if(a=="ABC"){
        cout<<A<<" "<<B<<" "<<C;
    }
    if(a=="ACB"){
        cout<<A<<" "<<C<<" "<<B;
    }
    if(a=="BAC"){
        cout<<B<<" "<<A<<" "<<C;
    }
    if(a=="BCA"){
        cout<<B<<" "<<C<<" "<<A;
    }
    if(a=="CAB"){
        cout<<C<<" "<<A<<" "<<B;
    }
    if(a=="CBA"){
        cout<<C<<" "<<B<<" "<<A;
    }
}