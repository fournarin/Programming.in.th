#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    long long n=s.length(),sum=0,n11=0;
    for(int i=0;i<n;i++){
        sum+=s[i]-'0';
        n11=(n11*10+s[i]-'0')%11;
    }
    cout<<sum%3<<" "<<n11;
    return 0;
}