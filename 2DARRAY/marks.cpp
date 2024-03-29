#include<iostream>
using namespace std;
int main(){
    int s,m;
    cout<<"enter the student "<<endl;
    cin>>s;
    cout<<"enter the marks"<<endl;
    cin>>m;
    int arr[s][m];
    for(int i=0;i<s;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<s;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}