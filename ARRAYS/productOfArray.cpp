#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,1,2,4};
    int mul=1;
    for(int i=0;i<=4;i++){
        mul=mul*arr[i];
    }
    cout<<mul;
    return 0;
}