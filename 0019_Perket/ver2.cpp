#include <bits/stdc++.h>	
using namespace std;	

int n,s[10],b[10],m=INT_MAX;	

void find(int i, int ss, int bb){
    if(i==n){
        if(bb>0){
            m=min(m,abs(ss-bb));
            //cout<<ss<<" "<<bb<<"\n";
    }}
    else {
        find(i+1,ss,bb);
        find(i+1,ss*s[i],bb+b[i]);
    }
}	

int main(){
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> s[i] >> b[i];
    find(0,1,0);
    cout << m;
return 0;
}
/*
1
3 10;
*/
/*
2
3 8
5 8
*/
/*
4
1 7
2 6
3 8
4 9
*/
/*
3
2 6
4 7
3 9
*/