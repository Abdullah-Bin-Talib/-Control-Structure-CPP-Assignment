#include <iostream>
using namespace std;

int main()
{
    int age;
    float price;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter ticket price: ";
    cin >> price;

    if (age < 5)
        cout << "Free";
    else if (age >= 5 && age <= 12 || age >= 65)
        cout << "Total price = " << price / 2;
    else
        cout << "Total price = " << price;

    return 0;
}
