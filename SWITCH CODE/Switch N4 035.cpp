#include<iostream>
using namespace std;

int main() {
    int choice;
    double val;

    cout << "1. Length: Meters to Feet\n";
    cout << "2. Weight: kg to lbs\n";
    cout << "3. Temperature: Celsius to Fahrenheit\n";
    cout << "Enter choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter length in meters: ";
            cin >> val;
            cout << val << " meters = " << val * 3.28084 << " feet\n";
            break;

        case 2:
            cout << "Enter weight in kg: ";
            cin >> val;
            cout << val << " kg = " << val * 2.20462 << " lbs\n";
            break;

        case 3:
            cout << "Enter temperature in Celsius: ";
            cin >> val;
            cout << val << " C = " << (val * 9.0 / 5.0) + 32 << " F\n";
            break;

        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}
