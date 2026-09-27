#include<iostream>
using namespace std;

int main()
 {
    float temp;
    cout << "Enter temperature: ";
    cin >> temp;

    if (temp > 0) {
        if (temp > 35) {
            cout << "Extremely Warm Weather" << endl;
        }
    }

    return 0;
}
