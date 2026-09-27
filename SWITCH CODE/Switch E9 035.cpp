#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    switch (num % 2) {
        case 0:
            cout << "Even" << endl;
            break;
        case 1:
        case -1: // Handles negative odd numbers
            cout << "Odd" << endl;
            break;
    }

    return 0;
}
