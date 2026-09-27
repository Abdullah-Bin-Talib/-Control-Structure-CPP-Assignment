#include<iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month) {
        // Months with 31 days (fall-through grouping)
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 days" << endl;
            break;

        // Months with 30 days
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days" << endl;
            break;

        // February
        case 2:
            cout << "28 days" << endl;
            break;

        default:
            cout << "Invalid month number!" << endl;
    }

    return 0;
}
