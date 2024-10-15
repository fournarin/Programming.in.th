#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int matrix1[a][b];
    int matrix2[a][b];
    int matrix3[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>matrix1[i][j];
        }
    }
    for(int e=0;e<a;e++){
        for(int r=0;r<b;r++){
            cin>>matrix2[e][r];
        }
    }
    for(int y=0;y<a;y++){
        for(int u=0;u<b;u++){
            matrix3[y][u]=matrix1[y][u]+matrix2[y][u];
        }
    }
    for(int q=0;q<a;q++){
        for(int w=0;w<b;w++){
            cout<<matrix3[q][w]<<" ";
        }
        cout<<endl;
    }
}