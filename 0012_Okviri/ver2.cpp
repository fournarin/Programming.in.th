#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n=5,k=0,z=0;
    int f=4*s.length()+1;
        for(int i=1;i<=5;i++){
            for(int j=1;j<=f;j++){
                if(i==3&&j==3+4*k) cout<<s[k],z++;
                else if(i+j==4+4*k||i-j==2-k*4||j-i==2+k*4||i+j==8+k*4){
                    if((((k+1)%3==0)||(i==3&&j==12*(z/3)+1))&&j!=1&&(j!=f||j==12*(z/3)+1)) cout<<'*';
                    else cout<<'#';
                }
                else cout<<'.';
                if(j%4==0) k++;
            }
            cout<<"\n";
            k=0;
            z=0;
        }
    return 0;
}
/*
1. A
2. DOG
3. ABCD
*/