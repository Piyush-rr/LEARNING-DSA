#include <iostream>
#include <string>
using namespace std;

void updateEvenPositions(string& str) {
    for (int i = 0; i < str.length(); i += 2) {
        str[i] = 'a';
    }
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    updateEvenPositions(str);
    cout << "Updated string: " << str << endl;
    return 0;
}
