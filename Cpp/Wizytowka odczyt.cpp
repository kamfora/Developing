#include <iostream>
#include <fstream>

// exit:
#include <cstdlib>

using namespace std;

string imie, nazwisko;
int tel;

int main()
{
    string linia;
    int nr_linii = 1;

    fstream plik;
    plik.open("wizytowka.txt", ios::in);

if(plik.good()==false) cout<<"Nie mozna otworzyc pliku!";
        

    while (getline(plik, linia))
    {
        switch (nr_linii)
        {
        case 1:
            imie = linia;
            break;
        case 2:
            nazwisko = linia;
            break;

        case 3:
            tel = atoi(linia.c_str());
            break;
        }

        nr_linii++;
    }

    plik.close();
    cout << imie << endl;
    cout << nazwisko << endl;
    cout << tel << endl;
    cout << "koniec programu" << endl;
    return 0;
}