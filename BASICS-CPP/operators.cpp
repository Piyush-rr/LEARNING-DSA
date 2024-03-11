#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;

    //arithematic operators
    cout<<"a + b "<<(a+b)<<endl;
    cout<<"a - b "<<(a-b)<<endl;
    cout<<"a * b "<<(a*b)<<endl;
    cout<<"a / b "<<(a/b)<<endl;
    cout<<"a % b "<<(a%b)<<endl;

    //Relational operator
    cout<<"a==b "<<(a==b)<<endl;
    cout<<"a>=b "<<(a>=b)<<endl;
    cout<<"a<=b "<<(a<=b)<<endl;
    cout<<"a!=b "<<(a!=b)<<endl;

    //Logical operator
    cout<<"a && b "<<(a&&b)<<endl;
    cout<<"a || b "<<(a||b)<<endl;
    cout<<" !a "<<(!a)<<endl;

    //Assignment operator
    cout<<"a = b "<<(a=b)<<endl;
    cout<<"a +=b "<<(a+=b)<<endl;
    cout<<"a -=b "<<(a-=b)<<endl;
    cout<<"a *=b "<<(a*=b)<<endl;
    cout<<"a /=b "<<(a/=b)<<endl;

    //bitwise operator
    cout<<"a & b "<<(a&b)<<endl;
    cout<<"a | b "<<(a|b)<<endl;
    cout<<"a ^ b "<<(a^b)<<endl;
    cout<<"a << b "<<(a<<b)<<endl;
    cout<<"a >> b "<<(a>>b)<<endl;
    cout<<"~(a) "<<~(a)<<endl;

    //conditional or ternary operator
    int c=(a<b)?b:a;
    cout<<"the greater number is :"<<c;    
    return 0;
}