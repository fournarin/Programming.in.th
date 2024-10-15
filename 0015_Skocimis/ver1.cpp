#include <iostream>
#include<vector>
#include <set>
using namespace std;
int main() {
    set<int> a;
    vector<int> v;
    for(int i= 0;i<3;i++){
        int x;
        cin>>x;
        a.insert(x);
        }
        for(int q : a){
            v.push_back(q);
        }
        int x = v[0];
        int y = v[1];
        int z = v[2];
        int m = z-y;
        int n = y-x;
        if(m>=n){
            cout<<m-1;
        }
        else{
            cout<<n-1;
        }
        return 0;
}