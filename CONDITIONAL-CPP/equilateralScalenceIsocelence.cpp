#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"enter the three sides value "<<endl;
    cin>>side1>>side2>>side3;
    if(side1==side2 && side2==side3){
        cout<<"tringle is equlateral "<<endl;
    }else if(side1==side2 || side2==side3){
        cout<<"tringle is scalence "<<endl;
    }else{
        cout<<" tringle is isosceles";
    }
    return 0;
}