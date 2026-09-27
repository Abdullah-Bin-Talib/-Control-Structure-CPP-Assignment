#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0) {
        if (num % 5 == 0) {
            cout << "Even number divisible by 5\n";
        }
    }

    return 0;
}
