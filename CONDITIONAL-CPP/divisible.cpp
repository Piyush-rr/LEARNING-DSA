#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the positive input "<<endl;
    cin>>n;
    if((n%5==0) && (n%3==0)){
        cout<<"the number is divisible by 5 and 3 "<<endl;
    }else{
        cout<<"Not divisible by 3 and 5 ";
    }
    return 0;
}