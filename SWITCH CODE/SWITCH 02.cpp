#include <iostream>
using namespace std;

int main() {
    char signal;
    cout << "Enter traffic signal color (R, Y, G): ";
    cin >> signal;

    switch (signal) {
        case 'R':
        case 'r':
            cout << "Stop" << endl;
            break;
        case 'Y':
        case 'y':
            cout << "Get Ready" << endl;
            break;
        case 'G':
        case 'g':
            cout << "Go" << endl;
            break;
        default:
            cout << "Invalid signal color!" << endl;
            break;
    }

    return 0;
}
