#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    int max=INT16_MIN;
    int secondMax=INT16_MIN;
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            secondMax=max;
            max=arr[i];
        }
    }
    cout<<secondMax;
    return 0;
}