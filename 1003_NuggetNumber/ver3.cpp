#include<bits/stdc++.h>
using namespace std;
int n;
set<int>s;
void nug(int k){
    if(k<=n) s.insert(k);
    if(k>n) return ;
    nug(k+6);
    nug(k+9);
    nug(k+20);
}
int main(){
    cin>>n;
    nug(0);
    if(s.size()==1){
        cout<<"no";
        return 0;
    }
    set<int>::iterator it = s.begin();
    it++;
    for(it;it!=s.end();it++){
        cout<<*it<<'\n';
    }
    return 0;
}