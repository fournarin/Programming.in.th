#include <bits/stdc++.h>
using namespace std;
int main(){	   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int sum=0;
    int n;cin>>n;string s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(s[i][0]==s[j][0]||s[i][1]==s[j][1]||s[i][2]==s[j][2]) sum++;
        }
    }
    cout<<sum;
    return 0;
}
/*
5
235
236
136
004
174
*/
/*
5
123
123
123
625
175
*/