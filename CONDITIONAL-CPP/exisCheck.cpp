#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the value of x and y"<<endl;
    cin>>x>>y;
    if(x!=0 && y==0){
        cout<<"point the -x exis"<<endl;
    }else if(x==0 && y!=0){
        cout<<"point the -y exis "<<endl;
    }else{
        cout<<"origin via (0,0)";
    }
    return 0;
}