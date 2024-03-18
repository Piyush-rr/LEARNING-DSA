#include<iostream>
using namespace std;
 double areaOfCircle(double redius){
        return 3.14*redius*redius;
    }
int main(){
    double redius;
    cout<<"enter the redius"<<endl;
    cin>>redius;
    double area=areaOfCircle(redius);
    cout<<"the area of circle is :"<<area;
    // cout<<""
    return 0;
}