#include<iostream>
using namespace std;

int main() {
    double income;
    cin >> income;

    if (income < 1000) {
        cout << "Tax rate: 0%" << endl;
    } 
    else if (income <= 3000) {
        cout << "Tax rate: 10%" << endl;
    } 
    else if (income <= 7000) {
        cout << "Tax rate: 20%" << endl;
    } 
    else {
        cout << "Tax rate: 30%" << endl;
    }

    return 0;
}
