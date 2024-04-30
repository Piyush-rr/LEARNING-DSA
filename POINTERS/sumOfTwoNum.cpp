// #include<iostream>
// using namespace std;
// int main(){
//     int *p,*q,result,a,b;
//     cout<<"enter the two numbers "<<endl;
//     cin>>a>>b;
//     p=&a;
//     q=&b;
//     result=*p+*q;
//     cout<<"sum of the numbers is :"<<result;
//     return 0;
// }

// >>..................Using function...................<<

#include<iostream>
using namespace std;
void sumOfNumbers(int *num1,int *num2,int *result){
    *result=*num1+*num2;
}
int main(){
    int num1,num2,result;
    cout<<"enter the first and second numbers "<<endl;
    cin>>num1>>num2;
    sumOfNumbers(&num1,&num2,&result);
        cout<<"sum of numbers is :"<<result;
    return 0;
}