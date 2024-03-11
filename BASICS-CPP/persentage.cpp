#include<iostream>
using namespace std;
int main(){
  int i,marks[5];
  float sum=0,avg,per;
  cout<<"enter the marks"<<endl;
  for(int i=0;i<5;i++){
    cin>>marks[i];
    sum=sum+marks[i];
  }
    avg=sum/5;
    per=(sum/500)*100;
    cout<<"Average of marks is :"<<avg<<endl;
    cout<<"persentage of marks is :"<<per<<endl;
    return 0;
}