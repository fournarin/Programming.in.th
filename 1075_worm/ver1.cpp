#include<bits/stdc++.h>
using namespace std;
/*
5
3 30
6 10
10 20
7 50
18 70
*/
int main(){
    int n;
    cin>>n;
    double sum=0.0,max=0.0,kum;
    long long b,t1,t2;
    vector<pair<long long,long long>> tp;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        tp.push_back(make_pair(y,x));
    }
    sort(tp.begin(),tp.end());
    for(int i=0;i<n;i++){
        sum+=tp[i].second;
        kum=sum/tp[i].first;
        if(max<sum/tp[i].first){
            max = sum/tp[i].first;
            t1=sum;
            t2=tp[i].first;
        }
    }

    cout<<t1<<" "<<t2;

    return 0;
}