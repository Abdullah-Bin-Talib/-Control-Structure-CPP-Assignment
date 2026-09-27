#include<iostream>
#include<string>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    cin >> text;

    if (!text.empty()) {
        if (text[0] == 'A') {
            cout << "Starts with A" << endl;
        }
    }

    return 0;
}
