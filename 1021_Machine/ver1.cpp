#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<int>a;
    char c[n];
    for(int i=0;i<n;i++){
        cin>>c[i];
        if(c[i]=='P') {
            int x;
            cin>>x;
            a.push_back(x);
        }
        else if(c[i]=='Q') {
            sort(a.begin(),a.end());
            if(a.empty()) cout<<"-1"<<"\n";
            else {
                cout<<a[a.size()-1]<<"\n";
                a.pop_back();
            }
        }
    }
    return 0;
}
/*
1.
7
P 11516
P 25485
Q
Q
P 2634
Q
Q
---------
2.
10
Q
P 10789
P 5122
P 5797
P 13696
P 28125
Q
Q
P 24297
P 7280
*/