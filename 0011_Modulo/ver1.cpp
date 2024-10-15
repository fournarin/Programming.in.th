#include <iostream>
#include<set>
using namespace std;
int main() {
    int n=10;
    int a=0;
    int b;
    set<int>num;
    for(int i=0 ; i<10;i++){
        cin>>b;
        a=b%42;
        num.insert(a);
    }
    cout<<num.size();
}