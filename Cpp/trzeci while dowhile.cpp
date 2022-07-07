#include <iostream>
#include <unistd.h>

using namespace std;

int populacja = 1;
int godzin = 0;

int main()
{
    while(populacja <= 1000000000){
        godzin++;
        populacja = populacja * 2;
        cout << "liczba godzin: " << godzin;
    cout << "populacja bakterii: " << populacja << endl;
        
    }

    return 0;
}

