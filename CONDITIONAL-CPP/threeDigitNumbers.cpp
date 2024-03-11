#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the positive integer "<<endl;
    cin>>n;
    if(n>=100 && n<=999){
        cout<<n<<"is a three digit numbers"<<endl;
    }else{
        cout<<n<<"not a three digit numbers";
    }
    return 0;
}