#include<iostream>
using namespace std;
int main(){
    int *p,*q,a,b,sum;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    p=&a;
    q=&b;
    sum=(*p)*(*q);
    cout<<"sum of two numbers is :"<<sum;
    return 0;
}


// >>--.................Using function...................---<<

// #include<iostream>
// using namespace std;
// void multiply(int *p,int *q,int *result){
// *result=(*p)*(*q);
// }
// int main(){
//     int p,q,result;
//     cout<<"enter the first and seconde numbers"<<endl;
//     cin>>p>>q;
//    multiply(&p,&q,&result);
//    cout<<result;
//     return 0;
// }
