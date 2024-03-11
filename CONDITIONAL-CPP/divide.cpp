#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the positive numbers "<<endl;
    cin>>n;
    if(n%5==0){
        cout<<"numbers divisible by 5 "<<endl;
    }else{
        cout<<"not divisible by 5";
    }
    return 0;
}