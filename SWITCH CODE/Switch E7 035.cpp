#include<iostream>
using namespace std;

int main() {
    char gender;
    cout << "Enter gender (M/m/F/f): ";
    cin >> gender;

    switch (gender) {
        case 'M':
        case 'm':
            cout << "Male" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Female" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    return 0;
}
