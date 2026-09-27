#include <iostream>
using namespace std;

int main() {
    int age;
    char registered;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Are you registered to vote? (y/n): ";
        cin >> registered;

        if (registered == 'y' || registered == 'Y') {
            cout << "Eligible Voter\n";
        }
    }

    return 0;
}
