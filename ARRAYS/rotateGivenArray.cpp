#include<iostream>
using namespace std;
 void reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
 }
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;  
    int k=3;           //time of rotate
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<=4;i++){
        cout<<arr[i];
    }
    return 0;
}