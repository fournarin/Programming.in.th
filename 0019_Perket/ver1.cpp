#include<bits/stdc++.h>
using namespace std;

int n,mam=2e9,a[11],b[11];
//4 17 26 38 49
void per(int i,int sort,int kom){
    if(i==n){
        if((kom!=0)&&(abs(sort-kom) < mam)){
            mam=abs(sort-kom);
        }
    }
    else{
     per(i+1,sort*a[i],kom+b[i]);
     per(i+1,sort,kom);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    per(0,1,0);
    cout<<mam;
    return 0;
}