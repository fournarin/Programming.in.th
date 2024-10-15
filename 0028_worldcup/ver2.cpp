#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,pair<int,pair<int,string>>>> vec;
    string n[4]; int r[4][4];
    for(int i=0;i<4;i++) cin>>n[i];
    for(int i=0;i<4;i++) for(int j=0;j<4;j++) cin>>r[i][j];
    for(int i=0;i<4;i++){ int point=0,tam=0,score=0;
        for(int j=0;j<4;j++){
            if(j!=i){ tam+=r[i][j];score+=r[j][i];
            if(r[i][j]>r[j][i]) point+=3; else if(r[i][j]==r[j][i]) point++;}}
        vec.push_back({point,{tam-score,{tam,n[i]}}});}
    sort(vec.begin(),vec.end());
    for(int i=3;i>=0;i--) cout<<vec[i].second.second.second<<" "<<vec[i].first<<"\n";
    return 0;
}
/*
Denmark
Netherland
Cameroon
Japan
0 0 2 1
2 0 2 1
1 1 0 0
3 0 1 0
*?
/*
Germany
Serbia
Australia
Ghana
0 0 4 1
1 0 1 0
0 2 0 1
0 1 1 0
*/