#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        if (ch == 'Z') {
            cout << "Last uppercase letter\n";
        }
    }

    return 0;
}
