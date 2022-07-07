#include <iostream>

using namespace std;

float metry;
int opcja;


int nacale(int m){
    return m*39;
}

int main(){

cout<<"podaj metry :";
cin>>metry;
cout<<"na cale: "<< nacale(metry) << endl;




    return 0;
    
}

/*procedura - funkcja którego niczego nie zwraca niczego pod swoją nazwa mainowi. NO REUTRN
  void ilemil(floar m)

redundancja- powtarzanie danego fragmentu f.
pamięć
NOTATKI:

 głowa i ciało funkcji

    parametry formalne- arg. ktore nazywa na swlasne potrzeby funkcja
    parameyty aktualne- arg. dla ktorych funkcja zostala wykonana - oryg.

Przesyłanie arg do podprogramu:
    przez wartość- tworzy kopie
    przez referencje- praca na oryg. zmiennej
Zmienne lokal/global


  */