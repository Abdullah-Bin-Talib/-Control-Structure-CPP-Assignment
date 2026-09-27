#include<iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A > B) {
        cout << "A is larger";
    } else if (B > A) {
        cout << "B is larger";
    }

    return 0;
}
