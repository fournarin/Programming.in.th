#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int sum1=0,sum2=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(int(s[i])>=97) sum1++;
        else sum2++;
    }
    if(sum1==s.length()) cout<<"All Small Letter";
    else if(sum2==s.length()) cout<<"All Capital Letter";
    else cout<<"Mix";
    return 0;
}
/*
1.ABCDEFG
2.abcdefg
3.AbCdEfG
*/