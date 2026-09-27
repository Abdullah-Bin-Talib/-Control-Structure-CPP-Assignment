#include<iostream>
using namespace std;

int main() {
    int age, experience;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter work experience (in years): ";
    cin >> experience;


    if (age >= 21 && age <= 65) {
    
        if (experience >= 3) {
            cout << "Qualified Applicant" << endl;
        }
    }

    return 0;
}
