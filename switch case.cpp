#include <iostream>
#include <curses.h>
#include <stdio.h>

using namespace std;
int wybor;

int main()
{
    for (;;)
    {

        cin >> wybor;
        switch (wybor)
        {
        case '1':
            cout << "dziala. wybor jeden" << endl;
            break;
        case '2':
            cout << "Wybrano ocpje 2" << endl;
            break;
        case '3':
            cout << "Wybrano ocpje 3" << endl;
            break;
        case '4':
            cout << "Wybrano ocpje 4" << endl;
            break;

        case '5':
            cout << "Wychodzę. < endl" << endl;

            getchar();
            getchar();

            exit(0);

            break;
        }
    }
}
