#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character "<<endl;
    cin>>ch;
    if((ch>='a' && ch<='z' ) || (ch>='A' && ch<='Z')){
        cout<<ch<<" is alphabet "<<endl;
    }else{
        cout<<ch<<"is not alphabet"<<endl;
    }
    return 0;
}