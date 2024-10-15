#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,max=-2000000000,min=2000000000;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]>max) max=x[i];
        if(x[i]<min) min=x[i];
    }
    cout<<min<<"\n"<<max;
    return 0;
}