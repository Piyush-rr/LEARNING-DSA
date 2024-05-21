#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
 
    Rectangle(){        //default constructor
        length=0;
        breadth=0;
    }

    Rectangle(int x,int y){              //parameterised constructor
        length=x;
        breadth=y;
    }        

    Rectangle(Rectangle& r){
        length=r.length;
        breadth=r.breadth;
    }
};
int main(){
    Rectangle r1;
    r1.length;
    r1.breadth;
    cout<<r1.length<<" "<<r1.breadth<<endl;

    Rectangle r2(3,4);
    r2.length;
    r2.breadth;
    cout<<r2.length<<" "<<r2.breadth<<endl;

    Rectangle r3=r2;
    cout<<r3.length<<" "<<r3.breadth;
    
    return 0;
}