// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter the size"<<endl;
//     cin>>size;
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    for(int i=1;i<=size;i++){
        for(int j=1;j<=size;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}