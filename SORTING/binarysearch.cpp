#include<iostream>
using namespace std;
int binarysearch(int arr[],int low,int high,int x){
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==x){
                return mid;
            }else if(arr[mid]>x){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return -1;
}
int main(){
    int arr[]={2,8,9,19,44};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    int result=binarysearch(arr,0,n-1,target);
    if(result==-1){
        cout<<"the array index is not present"<<endl;
    }else{
        cout<<"the array index is :"<<result;
    }
    return 0;
}