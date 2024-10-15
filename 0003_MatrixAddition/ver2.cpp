#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    int brr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>brr[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            arr[i][j]+=brr[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}