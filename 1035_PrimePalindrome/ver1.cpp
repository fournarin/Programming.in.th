#include<bits/stdc++.h>
using namespace std;
bool chk(int n){
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //vector<int>v(1000002);
    int n;
    cin>>n;
    string s,s1="";
    /*for(int i=3;i<1000002;i+=2){
        for(int j=i;j<i*j;j+=2){
            v[i*j]=1;
        }
    }*/
    for(int i=n;i<2000000;i++){
        /*if(v[i]==0&&i%2!=0) {
            s=to_string(i);
            for(int j=s.length()-1;j>=0;j--){
                s1+=s[j];
            }
            cout<<"s = "<<s<<" "<<"s1 = "<<s1<<"\n";
            if(s==s1) {
                cout<<s;
                return 0;
            }
        }*/
        if(chk(i)){
            s1="";
            s=to_string(i);
            for(int j=s.length()-1;j>=0;j--){
                s1+=s[j];
            }
            if(s==s1) {
                cout<<s;
                return 0;
            }
        }
    }
}