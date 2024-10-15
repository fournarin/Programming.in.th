#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,i,j,a;
    long double sum;
    cin>>a;
    int arr[a];
    for(i=0;i<a;i++){
        cin>>x;
        arr[i]=x;
    }
    for(i=0;i<a;i++){
        sum=1;
        for(j=1;j<=arr[i];j++){
            sum*=2;
        }
        cout<<fixed<< setprecision(0)<<sum<<endl;
    }
}