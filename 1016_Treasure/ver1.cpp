#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n[2]={0,0};
    vector<string>s;string e;
    while(e!="*"){
        cin>>e;
        s.push_back(e);
    }
    for(int j=0;j<s.size()-1;j++){
        int num=0,sum=0;
    char c,d='a';
    for(int i=0;i<s[j].size();i++){
        if(s[j][i]=='1'||s[j][i]=='2'||s[j][i]=='3'||s[j][i]=='4'||s[j][i]=='5'||s[j][i]=='6'||s[j][i]=='7'||s[j][i]=='8'||s[j][i]=='9'||s[j][i]=='0'){ 
            num=10*num+(s[j][i]-'0');
            sum++;
        }
    }
    if(s[j].size()-sum==1) c=s[j][s[j].size()-1];
    else if(s[j].size()-sum==2) c=s[j][s[j].size()-2],d=s[j][s[j].size()-1];
    if(c=='N'&&d=='a') n[1]=n[1]+num;
    else if(c=='N'&&d=='E') n[0]+=num/sqrt(2),n[1]+=num/sqrt(2);
    else if(c=='E'&&d=='a') n[0]=n[0]+num;
    else if(c=='S'&&d=='E') n[0]+=num/sqrt(2),n[1]-=num/sqrt(2);
    else if(c=='S'&&d=='a') n[1]=n[1]-num;
    else if(c=='S'&&d=='W') n[0]-=num/sqrt(2),n[1]-=num/sqrt(2);
    else if(c=='W'&&d=='a') n[0]=n[0]-num;
    else if(c=='N'&&d=='W') n[0]-=num/sqrt(2),n[1]+=num/sqrt(2);
    }
    double x=sqrt(n[0]*n[0]+n[1]*n[1]);
    cout<<fixed<<setprecision(3)<<n[0]<<" "<<n[1]<<"\n"<<x;
    return 0;
}
