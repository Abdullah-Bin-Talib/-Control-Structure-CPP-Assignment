#include<iostream>
using namespace std;

int main()
{
    int balance, w;
    char at;

    cout << "\tWelcome to the BANK!\t\n";
    cout << "Enter your balance: ";
    cin >> balance;
    cout << "Enter your account type(S,C): ";
    cin >> at;
    cout << "Enter the ammount you want to withdraw: ";
    cin >> w;

    if(at=='c' || at=='C' || at=='s' || at=='S'){
        if(w <= balance){
            if(at=='c' || at=='C'){
                cout << "Withdraw successfull!!";
            }
            if(at=='s' || at=='S'){
                if(balance - w >= 500){
                    cout << "Withdraw successfull!!";
                }
            }
        }
    }

    return 0;
}
