#include <iostream>

using namespace std;

int ile = 0;

int max;


int maksymalna(float *t, int ile){
     int max = *t;
for (int i = 0; i < ile; i++)
{
  if (*t >= max)
  {
    max = *t;
  }
  

t += 1;
}

return max;
}

int main()
{
    cout << "podaj ile zarezerwować w tablicy : " << endl;
    cin >> ile;
 

    float tablica[ile];

    for (int i = 0; i < ile; i++)
    {
        cout << "podaj wyraz " << i + 1 << endl;
        cin >> tablica[i];
    }


cout <<"maksimum to: " << maksymalna(tablica, ile) << endl;

    return 0;
}
