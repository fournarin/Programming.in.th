#include <bits/stdc++.h>
using namespace std;
int main(){	   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,A,c,B,b[2002002]={};long long sum=0;
     cin>>n;
    for(int i=0;i<n;i++){  cin>>c; b[c]++; }
     cin>>A;B=A;if(A%2==0){
         for(int i=1;i<b[A/2];i++){
             sum+=i;
         }
         B--;
     }
    for(int i=0;i<=B/2;i++) sum+=b[i]*b[A-i];
    cout<<sum;
    return 0;
}	/*	6	1 5	3	4	3	0	4	*/