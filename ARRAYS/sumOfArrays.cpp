#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,5,7,8};
    int sum=0;
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}