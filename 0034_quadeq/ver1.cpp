#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A,B,C;
    cin>>A>>B>>C;
    for(int a=1;a<=100;a++){
        for(int c=1;c<=100;c++){
            if(a*c!=A){
                continue;
            }
            for(int b=-100;b<=100;b++){
                for(int d=-100;d<=100;d++){
                    if(b*d!=C){
                continue;
            }
                    if(B==a*d+b*c){
                        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
                        return 0;
                    }
                    
                }
            }
        }
    }
    cout<<"No Solution";
    return 0;
}