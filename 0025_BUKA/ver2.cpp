#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    char c;
    cin>>a>>c>>b;
    if(c=='+'){
        if(a.length()==b.length()) {
            a[0] = '2';
            cout<<a; 
            return 0;
        }
        else if(a.length()<b.length()) swap(a,b);
            a[a.length()-b.length()] = '1';
            cout<<a;
    }
    else {
        cout<<1;
        for(int i=2;i<a.length()+b.length();i++){
            cout<<0;
        }
    }
    return 0;
}
/*
1.
1000
*
100
---------------
2.
10000
+
10
----------------
3.
10
+
1000
*/