#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"enter the number of rows"<<endl;
    cin>>rows;
    cout<<"enter the number of cols"<<endl;
    cin>>cols;
    for(int i=1;i<=rows;i++){
        char ch='A';
        for(int j=1;j<=cols;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}