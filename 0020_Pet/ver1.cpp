//หวัดดีภาสกร
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5][4];
    int sum[2][5]={
        {0,0,0,0,0},
        {1,2,3,4,5}
    };
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
            sum[0][i]+=a[i][j];
        }
    }
    int max=sum[0][0];
    for(int i=0;i<5;i++){
        if(max<sum[0][i]) {
        max=sum[0][i];
        }
    }
    for(int i=0;i<5;i++){
        if(max==sum[0][i]) cout<<sum[1][i]<<" "<<sum[0][i];
    }
    return 0;
}