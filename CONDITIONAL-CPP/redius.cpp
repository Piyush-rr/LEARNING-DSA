#include<iostream>
using namespace std;
int main(){
    float radius;
    cout<<"enter the radius "<<endl;
    cin>>radius;
    float area=3.14*radius*radius;
    float circumference=2*3.14*radius;
    if(area>circumference){
        cout<<"the area of the circle is larger than circumference"<<endl;
    }else{
        cout<<"the area of the circle is not larger than circumference";
    }
    return 0;
}