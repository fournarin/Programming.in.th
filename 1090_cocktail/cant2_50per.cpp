#include <bits/stdc++.h>
using namespace std;
int main(){	   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c,A,B,b[200002]={};long long sum=0;
     cin>>n;
    for(int i=0;i<n;i++){  cin>>c; b[c]++; }
     cin>>A;
     if(A%2==0){
         for(int i=1;i<b[A/2];i++) sum+=i;
         B=A-1;
     }
    for(int i=0;i<=B/2;i++) sum+=b[i]*b[A-i];
    cout<<sum;
    return 0;
}	/*	6	1 5	3	4	3	0	4	*/