#include <iostream>
#include <string>
using namespace std;

void reverseFirstHalf(string& str) {
    int len = str.length();
    int halfLen = len / 2;

    // Reverse the first half of the string
    for (int i = 0; i < halfLen / 2; ++i) {
        swap(str[i], str[halfLen - 1 - i]);
    }
}

int main() {
    string str;
    cout << "Enter a string of even length: ";
    cin >> str;

    // Ensure the input string has even length
    if (str.length() % 2 != 0) {
        cout << "Error: Input string must have even length." << std::endl;
        return 1;
    }

    // Reverse the first half of the string
    reverseFirstHalf(str);

    cout << "String after reversing first half: " << str <<endl;

    return 0;
}
