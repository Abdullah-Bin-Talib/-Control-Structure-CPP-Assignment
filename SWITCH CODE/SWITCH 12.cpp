#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Select Season (1: Spring, 2: Summer, 3: Autumn, 4: Winter): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Spring: Mild weather, great for outdoor walks!" << endl;
            break;
        case 2:
            cout << "Summer: Hot weather, stay hydrated and swim!" << endl;
            break;
        case 3:
            cout << "Autumn: Cool weather, wear a light jacket!" << endl;
            break;
        case 4:
            cout << "Winter: Cold weather, bundle up in warm clothes!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
