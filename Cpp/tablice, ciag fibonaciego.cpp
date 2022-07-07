#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

float oceny[5];
float suma=0, srednia;
int iloscOcen =5;
int main()
{
    for (int i = 0; i < iloscOcen; i++)
    {
        cout << endl
             << "podaj " << i + 1 << " ocene ";
        cin >> oceny[i];
        suma = suma + oceny[i];
        
    }
cout <<"Suma: "<<suma<<endl;
srednia = suma/iloscOcen;
cout << "Srednia: " << srednia<<endl;

getchar();getchar();
    return 0;
}
