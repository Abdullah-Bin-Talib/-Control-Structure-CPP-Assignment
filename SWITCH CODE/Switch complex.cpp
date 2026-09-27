#include<iostream>
using namespace std;

int main() {
    double balance = 2000.0;
    int accountType, transactionChoice;

    cout << "Select Account Type (1 for Savings, 2 for Checking): ";
    cin >> accountType;

    cout << "Select Transaction (1 for Deposit, 2 for Withdrawal, 3 for Inquiry): ";
    cin >> transactionChoice;

    switch (transactionChoice) {
        case 1: {
            double deposit;
            cout << "Enter deposit amount: $";
            cin >> deposit;
            balance += deposit;
            cout << "Deposit successful! New balance: $" << balance << endl;
            break;
        }
        case 2: {
            double amount;
            cout << "Enter withdrawal amount: $";
            cin >> amount;

            if (accountType == 1) { // Savings account rule
                if (balance - amount < 500) {
                    cout << "Transaction failed! Savings accounts must maintain a minimum balance of $500." << endl;
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful! Remaining balance: $" << balance << endl;
                }
            } else if (accountType == 2) { // Checking account rule
                if (amount > balance) {
                    cout << "Transaction failed! Insufficient balance." << endl;
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful! Remaining balance: $" << balance << endl;
                }
            } else {
                cout << "Invalid account type selected!" << endl;
            }
            break;
        }
        case 3:
            cout << "Current Balance: $" << balance << endl;
            break;

        default:
            cout << "Invalid transaction choice!" << endl;
            break;
    }

    return 0;
}
