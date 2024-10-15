#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int l,n;
	cin >> l >> n;
	string A[n];
	for(int i=0;i<n;i++) cin >> A[i];
    for(int i=0;i<n-1;i++){
        int c{0};
        for(int j=0;j<l;j++){
            if(A[i][j]!=A[i+1][j]) c++;
        }
        if(c>2){
            cout<<A[i];
            return 0;
            
        }
        c=0;
    }
    cout<<A[n-1];
	return 0;
}