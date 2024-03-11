#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age "<<endl;
    cin>>age;
    if(age>=18){
        cout<<"you can vote "<<endl;
    }else{
        cout<<"not elgible for vote ";
    }
    return 0;
}