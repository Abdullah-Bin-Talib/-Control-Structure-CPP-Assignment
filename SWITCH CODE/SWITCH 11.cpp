#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter letter grade (A, B, C, D, F): ";
    cin >> grade;

    switch (grade) {
        case 'A':
        case 'a':
            cout << "GPA: 4.0" << endl;
            cout << "Eligible for Honor Roll" << endl;
            break;
        case 'B':
        case 'b':
            cout << "GPA: 3.0" << endl;
            cout << "Eligible for Honor Roll" << endl;
            break;
        case 'C':
        case 'c':
            cout << "GPA: 2.0" << endl;
            break;
        case 'D':
        case 'd':
            cout << "GPA: 1.0" << endl;
            break;
        case 'F':
        case 'f':
            cout << "GPA: 0.0" << endl;
            break;
        default:
            cout << "Invalid letter grade!" << endl;
            break;
    }

    return 0;
}
