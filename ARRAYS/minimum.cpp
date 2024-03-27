#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,-2,4,6,78};
    int min=INT16_MAX;
    for(int i=0;i<=4;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<min;
    return 0;
}