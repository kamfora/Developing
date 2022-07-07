#include <iostream>
#include <time.h>
#include <unistd.h>

using namespace std;
int ile;

int main()
{
    cout << "porównanie czasów sortowania bubble" << endl;
    cout << "ile losowych liczb do sortowania?" << endl;
    cin >> ile;

    // dynamiczna alokacja tablicy
    int *tablica;
    tablica = new int[ile];

    srand(time(NULL));

    // wczytywanie losowych liczb do tablicy
    for (int i = 0; i < ile; i++)
    {
        tablica[i] = rand() % 100000 + 1;
        cout << tablica[i] << "   ";
    }

    delete[] tablica;

    return 0;
}
