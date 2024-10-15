#include<bits/stdc++.h>
using namespace std;
/*
bool chk(unsigned long long int n){
    for(unsigned long long int i=3;i*i<=n;i+=3){
        if(n%i==0) return 0;
    }
    return 1;
}
*/
int main(){
    vector<unsigned long long int>v={3, 7, 31, 127, 8191, 131071, 524287, 2147483647, 2305843009213693951};
    vector<unsigned long long int>::iterator it;
    /*
    for(int i=2;i<64;i++){
        unsigned long long int n;
        n=pow(2,i);
        if(chk(n-1)){
            v.push_back(n-1);
        }
    }
    */
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        unsigned long long int m;
        cin>>m;
        it = find(v.begin(),v.end(),m);
        if(it != v.end()) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    //for(it=v.begin();it!=v.end();++it) cout<<*it<<", ";
    //cout<<"retgr";
    return 0;
}
/*
9
1
2
3
4
5
6
7
8
9
*/