#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Play Game" << endl;
            break;
        case 2:
            cout << "Load Game" << endl;
            break;
        case 3:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
