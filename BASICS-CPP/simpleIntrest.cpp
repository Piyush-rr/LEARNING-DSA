#include<iostream>
using namespace std;
int main(){
    float SI,rate,PA,time;  //PA --> principle amount 
    cout<<"enter the principle amount rate and time :"<<endl;
    cin>>PA>>rate>>time;
    SI=(PA+rate+time)/100;  //SI--> simple intrest
    cout<<"the simpleIntrest is :"<<SI;
    return 0;
}