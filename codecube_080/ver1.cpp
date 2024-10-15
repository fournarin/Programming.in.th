#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    5
    ABCABCABCABC
    ABCABCABDABC
    !@#$%!@#$%
    AAAAAAAAAAAAAAAAAAA
    BADBOYBADBOYBADBOYBADBOYB
    */
        int n = 5;
        //cin>>n;
        for(int i=0;i<n;i++){
        int sum = 0 ;
        string s;
        string a="";
        cin>>s;
        for(int i=0;i<s.length();i++){
            string b="";
            a+=s[i];
            if(s.length()%a.length() !=0 ) continue;
            for(int j=0;j<s.length();j+=a.length()){
                b+=a;
            }
            if(b==s) {
                //cout<<a<<"\n";
                //break;
                sum++;
            }
        }
        cout<<sum<<"\n";
        }
    return 0;
    
}
