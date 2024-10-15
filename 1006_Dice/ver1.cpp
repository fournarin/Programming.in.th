#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<string>s;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        s.push_back(x);    }
    for(int j=0;j<n;j++){
        int a[]={1,2,3,5,4,6};
    int l = s[j].length();
    for(int i=0;i<l;i++){
        if(s[j][i]=='F') {
            swap(a[0],a[1]);
            swap(a[0],a[3]);
            swap(a[3],a[5]);
        }
        else if(s[j][i]=='B'){
            swap(a[0],a[1]);
            swap(a[1],a[5]);
            swap(a[3],a[5]);
        }
        else if(s[j][i]=='L'){
            swap(a[0],a[4]);
            swap(a[4],a[5]);
            swap(a[2],a[5]);
        }
        else if(s[j][i]=='R'){
            swap(a[0],a[2]);
            swap(a[4],a[5]);
            swap(a[2],a[4]);
        } 
        else if(s[j][i]=='C') {
            swap(a[1],a[4]);
            swap(a[3],a[4]);
            swap(a[2],a[3]);
        }
        else {
            swap(a[1],a[2]);
            swap(a[2],a[3]);
            swap(a[3],a[4]);
        }
    }
    cout<<a[1]<<" ";
    }
}