#include<iostream>
#include<string>
using namespace std;

int main() {
    string status;
    double balance;

    cout << "Enter account status: ";
    cin >> status;
    cout << "Enter balance: ";
    cin >> balance;

    if (status == "active") {
        if (balance > 0) {
            cout << "Active account in good standing" << endl;
        }
    }

    return 0;
}
