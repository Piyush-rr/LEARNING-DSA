// .............single inheritance ............

// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//     Parent(){
//         cout<<"parent class"<<endl;
//     }
// };

// class child:public Parent{
//     public:
//     child(){
//         cout<<"child class"<<endl;
//     }
// };
// int main(){
//     child c;
//     return 0;
// }


//.........................multilevel inheritance..................

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     A(){
//         cout<<"parent class"<<endl;
//     }
// };

// class B:public A{
//     public:
//     B(){
//         cout<<"base class"<<endl;
//     }
// };

// class C:public B{
//     public:
//     C(){
//         cout<<"subclass"<<endl;
//     }
// };
// int main(){
//     C obj;
//     return 0;
// }


//.......................multiple inheritance.......................

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     A(){
//         cout<<"parent class"<<endl;
//     }
// };

// class B{
//     public:
//     B(){
//         cout<<"base class"<<endl;
//     }
// };

// class C:public A,public B{
//     public:
//     C(){
//         cout<<"subclass"<<endl;
//     }
// };
// int main(){
//     C obj;
//     return 0;
// }


//...........Hierarchical inheritance............


#include<iostream>
using namespace std;
class Parent1{
    public :
    Parent1(){
        cout<<"parent class"<<endl;
    }
};

class child1:public Parent1{
    public :
    child1(){
        cout<<"child1 class"<<endl;
    }
};

class child2:public Parent1{
    public:
    child2(){
        cout<<"child2 class"<<endl;
    }
};

int main(){
    child2 c;
    return 0;
}