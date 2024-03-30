#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the rows and col"<<endl;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<"the sum of matrix is:"<<sum;
    return 0;
}