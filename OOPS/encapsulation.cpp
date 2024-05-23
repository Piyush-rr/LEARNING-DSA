#include<iostream>
using namespace std;
class Encapsul{
    int n;

    public:
    int set(int x){
        n=x;
    }

    int get(){
        return n;
    }

};
int main(){
    Encapsul obj;
    obj.set(4);
    cout<<obj.get()<<endl;
    return 0;
}