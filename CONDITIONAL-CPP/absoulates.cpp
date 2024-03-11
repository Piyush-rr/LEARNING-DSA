#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value :"<<endl;
    cin>>n;
    if(n<0){
        cout<<n*-1<<endl;
    }else{
        cout<<n;
    }
    return 0;
}