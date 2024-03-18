#include<iostream>
using namespace std;
int countDigit(int num){
    int count=0;
    while(num>0){
        num/=10;
        count++;
    }
    return count;
}
    int square(int num){
        return num*num;
    }
int main(){
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    int digit=countDigit(num);
    int squares=square(num);
    cout<<"number of digits :"<<digit<<endl;
    cout<<"square of numbers :"<<squares;
    return 0;
}