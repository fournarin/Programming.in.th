#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    int max,min,mediam;
    min=a[0];
    mediam=a[1];
    max=a[2];
    map<char,int> m;
    m['A']=min;
    m['B']=mediam;
    m['C']=max;
    string s;
    cin>>s;
    for(int i=0;i<3;i++){
        cout<<m[s[i]]<<" ";
    }
    return 0;
}