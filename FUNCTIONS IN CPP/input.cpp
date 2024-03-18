#include<iostream>
using namespace std;
void betweenPrint(int a,int b){
    if(a%2==0)
    a++;
    for(int i=a;i<=b;i+=2){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int a,b;
    cout<<"enter the first and second numbers"<<endl;
    cin>>a>>b;
    cout<<"odd numbers between "<<a<<"and"<<b<<"are";
    betweenPrint(a,b);
    return 0;
}