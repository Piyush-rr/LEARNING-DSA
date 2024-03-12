#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the terms "<<endl;
    cin>>n;
    int a1=100;
    int d=-3;
    for(int i=0;i<n;i++){
        int term=a1+i*d;
        cout<<term<<endl;
    }
    return 0;
}