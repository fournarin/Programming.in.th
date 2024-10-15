#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);int mux=0;
    string s1,s2;cin>>s1>>s2;int a1,a2;
    for(int i=0;i<s1.length();i++){
        for(int j=0;j<s2.length();j++){
            if(s1[i]==s2[j]){
                int x=i,y=j;int sum=0;
                while(s1[x]==s2[y]&&x<s1.length()&&y<s2.length()){
                    x++;y++;sum++;
                }
                if(mux<sum){
                    mux=sum;
                    a1=i;a2=sum+i;
                }
            }
        }
    }
    for(int i=a1;i<a2;i++) cout<<s1[i];
    return 0;
}