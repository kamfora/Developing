#include <iostream>

using namespace std;
string PIN;

int main()
{

    cout << "Witaj." << endl;
    cout << "podaj numer PIN: ";
    cin >> PIN;
    if (PIN == "1111")
    {
        cout << "poprawny PIN";
    }
    else
    {
        cout << "gnoj, zly pin";
    }

    return 0;
}
