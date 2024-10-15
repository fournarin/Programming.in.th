#include<bits/stdc++.h>
using namespace std;
int main() {
    int x,sum=0,i,j,n,m;
    vector<int> a;
    for(i=0;i<9;i++){
        cin>>x;
        a.push_back(x);
        sum+=x;
    }
     
    for(i=0;i<9;i++){
        for(j=1;j<9;j++){
            if(sum-a[i]-a[j]==100){
                n=a[i];
                m=a[j];
                break;
            }
        }
    }
    for(i=0;i<9;i++){
        if(a[i]==n||a[i]==m) ;
        else cout<<a[i]<<endl;
    }
    return 0;
}