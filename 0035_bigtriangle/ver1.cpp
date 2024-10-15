#include <bits/stdc++.h>
using namespace std;
int main(){
    set<double>s;
    vector<double>v;
    int n;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                s.insert(abs((x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-y[i]*x[j]-y[j]*x[k]-y[k]*x[i])*0.5));
            }
        }
    }
    for(double x:s){
        v.push_back(x);
    }
    cout<<fixed<<setprecision(3)<<v[v.size()-1];
}