#include<iostream>
using namespace std;

int main() {
    int score;
    cin >> score;

    if (score >= 90) {
        cout << "Grade A";
    } else if (score >= 80 && score <= 89) {
        cout << "Grade B";
    } else if (score >= 70 && score <= 79) {
        cout << "Grade C";
    }

    return 0;
}
