#include<iostream>
using namespace std;

int main() {
    int season;
    cout << "Enter season number (1-4): ";
    cin >> season;

    switch (season) {
        case 1:
            cout << "Spring" << endl;
            break;
        case 2:
            cout << "Summer" << endl;
            break;
        case 3:
            cout << "Autumn" << endl;
            break;
        case 4:
            cout << "Winter" << endl;
            break;
        default:
            cout << "Invalid season" << endl;
    }

    return 0;
}
