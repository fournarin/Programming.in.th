#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double sum=0;
    double r[5]={0,0,0,0,0,};
    double a[5]={1,0.75,0.5,0.25,0.175};
    double k[5];
    cin>>n;
    double s[n][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>s[i][j];
            r[j]+=s[i][j];
        }
    }
    for(int j=0;j<5;j++){
            k[j]=r[j]*a[j];
            sum+=k[j];
        }
        cout<<ceil(sum);
    return 0;
}