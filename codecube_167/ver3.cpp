#include<bits/stdc++.h>
using namespace std;
long long m,n;
vector<long long>v={3, 7, 31, 127, 8191, 131071, 524287, 2147483647, 2305843009213693951};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        cin>>m;
        binary_search(v.begin(), v.end(), m) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}