#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter the numbers"<<endl;
    cin>>n;
    int a=3;
    for(int i=0;i<n;i++){
        int term=a*pow(4,i);
        cout<<term<<endl;
    }
    return 0;
}