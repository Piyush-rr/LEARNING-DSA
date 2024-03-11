#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=4;
    if(a>0 && b>0){
        cout<<"a and b is greater than 0 "<<endl;
    }
    if(a==4 || b==4){
        cout<<"at least one value is equal."<<endl;
    }
    return 0;
}