#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,-4,6,7};
    int max=INT16_MIN;                  
    for(int i=1;i<=4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}
