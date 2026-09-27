#include<iostream>
using namespace std;

int main() 
{
    char grade;
    cout << "Enter letter grade (A, B, C, D, F): ";
    cin >> grade;

    switch (grade) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
            cout << "Pass" << endl;
            break;
        case 'F':
            cout << "Fail" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }

    return 0;
}
