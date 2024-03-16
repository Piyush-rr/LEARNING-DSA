#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<"the count numbers is :"<<count;
    return 0;
}