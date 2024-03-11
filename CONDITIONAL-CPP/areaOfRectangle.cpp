#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"enter the length "<<endl;
    cin>>length;
    cout<<"enter the breadth";
    cin>>breadth;
    float area=length*breadth;
    float perimeter=2*(length+breadth);
    if(area>breadth){
        cout<<"area of rectangle is greater than perimeter"<<endl;
    }else if(area<perimeter){
        cout<<"perimeter is greater than area "<<endl;
    }else{
        cout<<"equal the value";
    }
    return 0;
}