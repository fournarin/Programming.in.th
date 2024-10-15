#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s[7]={"Wednesday", "Thursday","Friday","Saturday","Sunday","Monday", "Tuesday"};
    int d,m;
    cin>>d>>m;
    if(m==1||m==10) cout<<s[d%7];
    else if(m==5) cout<<s[(d+1)%7];
    else if(m==8) cout<<s[(d+2)%7];
    else if(m==6) cout<<s[(d+4)%7];
    else if(m==12||m==9) cout<<s[(d+5)%7];
    else if(m==4||m==7) cout<<s[(d+6)%7];
    else cout<<s[(d+3)%7];
    return 0;
}