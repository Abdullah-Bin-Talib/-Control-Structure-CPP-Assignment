#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a 4 digit number: ";
    cin>>num; 

    int first  = num / 1000;
    int second = (num / 100) % 10;
    int third  = (num / 10) % 10;
    int fourth = num % 10;
    if (first == fourth && second == third) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}
