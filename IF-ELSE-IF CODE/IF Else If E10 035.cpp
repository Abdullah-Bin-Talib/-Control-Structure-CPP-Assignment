#include<iostream>
using namespace std;

int main() {
    int speed;
    cin >> speed;

    if (speed < 40) {
        cout << "Slow";
    } else if (speed >= 40 && speed <= 80) {
        cout << "Normal";
    } else if (speed > 80) {
        cout << "Fast";
    }

    return 0;
}
