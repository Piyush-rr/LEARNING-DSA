#include<iostream>
using namespace std;
int main(){
    int a[2][2]={1,2,3,5};
    int b[2][2]={2,3,4,5};
    int result[2][2];
    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            result[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<result[i][j];
        }
        cout<<endl;
    }
    return 0;
}
