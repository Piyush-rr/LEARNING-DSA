#include<iostream>
using namespace std;
int main(){
    char choice;
    int x,y;
    while(1){
        cout<<"enter the operators (+,-,*,/,%)"<<endl;
        cin>>choice;
        if(choice=='x'){
            exit(0);
    }
    cout<<"enter the two numbers "<<endl;
    cin>>x>>y;
    switch(choice){
        case '+': cout<<x << "+"<<y<<"= "<<x+y<<endl;
                cin>>x>>y;
                break;
        case '-': cout<<x<< "-"<<y<<"= "<<x-y<<endl;
                cin>>x>>y;
                break;
        case '*': cout<<x<<"*"<<y<<" "<<x*y<<endl;
                cin>>x>>y;
                break;
        case '/': cout<<x<<"/"<<y<<" "<<x/y<<endl;
                cin>>x>>y;
                break;
        case '%': cout<<x<<"%"<<y<<" "<<x%y<<endl;
                cin>>x>>y;
                break;
        default: cout<<"invalid choice ";
    }}
    return 0;
}