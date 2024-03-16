#include<iostream>
using namespace std;
int main(){
    int n,a=-1,b=1,c=a+b;
    cout<<"enter a number "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }
    return 0;
}