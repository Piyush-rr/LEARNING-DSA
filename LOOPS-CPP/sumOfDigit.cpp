#include<iostream>
using namespace std;
int main(){
    int x,r,s=0;
    cout<<"enter the numbers"<<endl;
    cin>>x;
    while(x>0){
        r=x%10;
        s=s+r;
        x=x/10;
    }
    cout<<"sum of digits is :"<<s;
    return 0;
}