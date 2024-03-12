#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"enter the terms"<<endl;
    cin>>n;
    int a=1;
    int r=2;
    cout<<a<<endl;
    for(int i=1;i<n;i++){
        cout<<a*pow(r,i)<<endl;
    }
    return 0;
}