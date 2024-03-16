#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter the numbers"<<endl;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0){
        cout<<"prime numbers"<<endl;
    }else{
        cout<<"not prime numbers";
    }
    return 0;
}