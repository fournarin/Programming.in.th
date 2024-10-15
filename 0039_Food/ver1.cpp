#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,arr[] = {1, 2, 3,4,5,6,7,8};
    cin>>n>>m;
    int a[8]={};
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        a[i]=x;
    }
    do {
        for (int i = 0; i < n; i++) {
            if(arr[0]==a[0]||arr[0]==a[1]||arr[0]==a[2]||arr[0]==a[3]||arr[0]==a[4]||arr[0]==a[5]||arr[0]==a[6]||arr[0]==a[7]) goto jump;
            else cout << arr[i] << " ";
        }
        cout <<endl;
        jump:;
    } while (next_permutation(arr, arr + n));
    return 0;
}
/*
1.
4
3
1 2 3
-------------
2.
4
2
3 2
*/
