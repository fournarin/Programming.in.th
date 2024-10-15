#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>numbers;
    int num;
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>num;
        numbers.push_back(num);
    }
    if(numbers.empty()){
        cout<<"no"<<endl;
    }
    else{
        int max=numbers[0];
        int min=numbers[0];
        for(int j=1;j<numbers.size();j++){
            if(numbers[j]>max){
                max=numbers[j];
            }
            if(numbers[j]<min){
                min=numbers[j];
            }
        }
        cout<<min<<endl<<max;
    }
}