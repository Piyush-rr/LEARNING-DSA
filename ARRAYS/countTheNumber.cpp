#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,4,5,7,8,9};
    int count=0,x=7;
    for(int i=0;i<=6;i++){
        if(arr[i]>x){
            cout<<" "<<arr[i];
        }
    }
    return 0;
}