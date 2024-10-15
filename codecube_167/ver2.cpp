#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long>v={3, 7, 31, 127, 8191, 131071, 524287, 2147483647, 2305843009213693951};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long m;
        cin>>m;
        binary_search(v.begin(), v.end(), m) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
/*
9
1
2
3
4
5
6
7
8
9
*/