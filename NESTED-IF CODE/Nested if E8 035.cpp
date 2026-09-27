#include<iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;

    if (year > 2000) {
        if (year % 4 == 0) {
            cout << "Post-2000 Leap Candidate" << endl;
        }
    }

    return 0;
}
