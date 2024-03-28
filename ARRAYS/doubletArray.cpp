// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int x=5;
//     int pairs=0;
//     for(int i=0;i<=4;i++){
//         for(int j=0;j<=4;j++){
//             if(arr[i]+arr[j]==x){
//                 pairs++;
//             }
//         }
//     }
//     cout<<pairs;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,6,5};
    int totalPairs=0;
    int x=11;
    for(int i=0;i<=5;i++){
        for(int j=i+1;j<=5;j++){
            if(arr[i]+arr[j]==x){
                totalPairs++;
                cout<<arr[i]<<" "<<arr[j]<<endl;   
            }
        }
    }
        cout<<totalPairs;

    return 0;
}