#include <iostream>
#include <unistd.h>

using namespace std;
string imie;
int liczba;

int main()
{
    cout <<"podaj imie: ";
    cin >> imie;
        cout <<"podaj liczbe: ";
cin >> liczba;
    for (int i = 1; i <= liczba; i++)
    {

        //cout << i << endl;
        cout << i <<". "<<imie<<endl;
        sleep(1);
        //system("clear");k


    } 
    cout << "Koniec";
    return 0;
}

