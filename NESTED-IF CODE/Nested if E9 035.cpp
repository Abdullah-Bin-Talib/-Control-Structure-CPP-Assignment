#include<iostream>
using namespace std;

int main() {
    double total;
    bool hasCode; 

    cout << "Enter cart total: ";
    cin >> total;
    cout << "Has premium code? (1 for Yes, 0 for No): ";
    cin >> hasCode;

    if (total > 100) {
        if (hasCode) {
            cout << "Qualified for Premium Discount" << endl;
        }
    }

    return 0;
}
