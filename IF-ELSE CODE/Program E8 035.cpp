#include <iostream>
using namespace std;

int main()
{
    bool isLoggedIn;
    cin >> isLoggedIn;

    if (isLoggedIn)
        cout << "Welcome";
    else
        cout << "Please Log In";

    return 0;
}
