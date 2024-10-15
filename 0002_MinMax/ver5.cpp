#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int max;
    int min;
    int f;
    cin>>f;
    max=f;
    min=f;
    for(int i=0;i<n-1;i++){
        int s;
        cin>>s;
        if(max<s) max=s;
        if(min>s) min=s;
    }
    cout<<min<<"\n"<<max;
    return 0;
}