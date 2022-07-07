#include <iostream>
#include <time.h>
#include <unistd.h>

using namespace std;
int ile;

clock_t start, stop;
double czas;

void sortowanie_babelkowe(int *tab, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= 1; j--)
        {
            if (tab[j] < tab[j - 1])
            {
                int bufor;
                bufor = tab[j - 1];
                tab[j - 1] = tab[j];
                tab[j] = bufor;
            }
        }
    }
}

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
    cout << "NIEPOSORTOWANE: "<<endl;
    for (int i = 0; i < ile; i++)
    {
        tablica[i] = rand() % 100000 + 1;
        
        cout << tablica[i] << "   ";
    }
    cout << endl<< "trwa sortowanie......... " << endl<<endl;
    start = clock();

    sortowanie_babelkowe(tablica, ile);
        cout << "POSORTOWANE:   ";

    for (int i = 0; i < ile; i++)
    {
    
        
        cout << tablica[i] << "   ";
    }
    

    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << endl<< "czas sortowania w bombelku: " << czas <<" sekund";
    

    delete[] tablica;

    return 0;
}
