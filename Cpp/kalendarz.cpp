#include <iostream>
#include <cstdlib>
using namespace std;

int nr_miesiaca;

int main()
{
    cout << "Podaj numer miesiaca";
    if (!(cin >> nr_miesiaca)){

        cerr<<"TO NIE LICZBA";
        exit(0);
    }

    switch (nr_miesiaca)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 12:
        cout << "ten ma 31 dni";
         break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "ten ma 30 dni";
        break;

    default:
        break;
    }

    return 0;
}
