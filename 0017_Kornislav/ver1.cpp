#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int u=0;
    vector<int> c;
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        c.push_back(x);
    }
    sort(c.begin(),c.end());
    int a=c[0];
    int b=c[2];
    cout<<a*b<<endl;
}