#include<iostream>
using namespace std;
int main(){
     int n, x;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the element to find: ";
    cin >> x;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            cout << "Element found at index: " << i<<endl ;
        }
     }
    return 0;
}