#include <iostream>

using namespace std;
string PIN;
string login;

int main()
{

    cout << "Witaj." << endl;
    cout << "podaj login: ";
    cin >> login;
    cout << "podaj numer PIN: ";
    cin >> PIN;

    if ((login == "kamil")&&(PIN == "1111"))
        {
            cout << "Zalogowano";
        }
    else
    {
        cout << "gnoj, zly pin lub haslo1";
    }

    return 0;
}