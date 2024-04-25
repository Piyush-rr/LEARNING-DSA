#include<iostream>
using namespace std;
int main(){
    string str;
    int vowels=0;
    cout<<"enter the string "<<endl;
    getline(cin,str);

    for(int i=0;i<=str.length();i++){
        char ch=str[i];
        if(ch=='a' ||ch =='e' ||ch=='i' || ch =='o' ||ch =='u'|| ch =='A'||ch =='I' ||ch =='U' ||ch =='O' || ch =='E'){
            vowels++;
        }
    }
        cout<<"the numbers of vowels is "<<vowels;

    return 0;
}
