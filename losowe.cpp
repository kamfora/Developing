#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;
int liczba;
int strzal;
int proba = 1;
int main()
{

    cout << " Wylosowałem liczbę od 1 do 100." << endl;

    srand(time(NULL));
    liczba = rand() % 100 + 1;

    cout << "Liczba to: " << liczba << endl;
    cout << "Zgaduj:" << endl;
    cin >> strzal;

    while (strzal != liczba)
    {
        cout << "\a" << endl;
        cout << "PUDŁO" << endl;
        proba++;
        if (strzal > liczba)
        {
            cout << "Podałeś za dużą liczbe, próbuj dalej" << endl;
            cin >> strzal;
        }
        else
        {
            cout << "Podałeś za małą liczbę, próbuj dalej" << endl;
            cin >> strzal;
        }
    }

    cout << "TAK, trafiłeś" << endl;
    cout << "Ilość prób: " << proba << endl;
    system("pause");
    return 0;
}