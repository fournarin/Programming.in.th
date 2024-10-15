#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int>s;
    int n[10];
    for(int i=0;i<10;i++){
        cin>>n[i];
        s.insert(n[i]%42);
    }
    cout<<s.size();
    return 0;
}
/*
1
2
3
4
5
6
7
8
9
10
*/