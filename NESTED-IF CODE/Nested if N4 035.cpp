#include<iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;


    if (num % 2 == 0) {
        
        if (num % 3 == 0) {
            cout << "Divisible by 6" << endl;
        }
    }

    return 0;
}
