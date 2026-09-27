#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << "Vowel";
    else if (ch >= '0' && ch <= '9')
        cout << "Digit";
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        cout << "Consonant";
    else
        cout << "Special Character";

    return 0;
}
