#include<iostream>
using namespace std;

class Fruit{
 public:
    string name;
    string color;
};

int main(){
    //object is created
    Fruit f1;
    f1.name="mango";
    f1.color="red";
    cout<<f1.name<<" "<<f1.color<<endl;

    // using pointer object

    Fruit *f2=new Fruit;
    f2->name="banana";
    f2->color="yellow";

    cout<<f2->name<< " "<<f2->color;

    return 0;
}