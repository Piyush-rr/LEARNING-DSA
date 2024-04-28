#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string of length greater than 5: ";
    cin >> str;

    // Ensure the input string has length greater than 5
    if (str.length() <= 5) {
        cout << "Error: Input string must have length greater than 5." << std::endl;
        return 1;
    }

    // Reverse the substring from position 2 to 5
    reverse(str.begin() + 1, str.begin() + 5);
    cout << "String after reversing substring from position 2 to 5: " << str << std::endl;

    return 0;
}
