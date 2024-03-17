#include<iostream>
using namespace std;
int main(){
    int n,i,j,m;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<"enter the coloum"<<endl;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}