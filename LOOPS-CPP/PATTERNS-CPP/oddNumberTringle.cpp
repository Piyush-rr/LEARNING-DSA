#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter the number"<<endl;
    cin>>rows;
    for(int i=1;i<=rows;i++){
        int num=1;
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num+=2;
        }
        cout<<endl;
    }
    return 0;
}