#include<iostream>
using namespace std;
int main(){
    int marks[10]={90,45,60,30,66,72,30,40,32,88};
    for(int i=0;i<=9;i++){
        if(marks[i]<35){
            cout<<" "<<i;
        }
    }
    return 0;
}