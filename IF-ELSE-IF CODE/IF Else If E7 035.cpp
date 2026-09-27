#include<iostream>
using namespace std;

int main() {
    int code;
    cin >> code;

    if (code == 1) {
        cout << "Stop";
    } else if (code == 2) {
        cout << "Caution";
    } else if (code == 3) {
        cout << "Go";
    }

    return 0;
}
