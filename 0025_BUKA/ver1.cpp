#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b,c;
    char d;
    cin>>a>>d>>b;
    if(d=='*'){
        for(int i=2;i<(a+b).length();i++){
            c+='0';
        }
        cout<<'1'<<c;
    }
    else{
        if (a==b){
            for(int i=1;i<(a).length();i++){
            c+='0';
            }
            cout<<"2"<<c;
        }
        else {
            if(a.length()<b.length()) swap(a,b);
            a[a.length()-b.length()]=char(1+'0');
            cout<<a;
            
        }
    }
    return 0;
}