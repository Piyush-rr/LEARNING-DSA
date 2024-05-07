#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,9,6,8,2};
    int n=5;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }}}
        cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
} 