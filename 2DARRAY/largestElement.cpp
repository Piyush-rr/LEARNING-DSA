#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the rows and col"<<endl;
    cin>>m>>n;
    int max=INT16_MIN;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    cout<<"the largest element is :"<<max;
    return 0;
}