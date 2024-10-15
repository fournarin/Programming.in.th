#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,y,z,n,i;
    vector<int> v;
    set<int> s;
    cin>>n;
    if(n<6){
        cout<<"no";
    }
    else{
        for(i=6;i<=n;i++){
            for(x=0;x<n/2;x++){
                for(y=0;y<n/2;y++){
                    for(z=0;z<n/2;z++){
                        if(6*x+9*y+20*z==i) {
                        s.insert(i);
                        goto manee;
                    }
                    
                }
                
            }
        }
        manee:;
        }
    }
    for(int r : s){
        v.push_back(r);
    }
    for(i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}