#include <iostream>
using namespace std;

int main() {
  int edad;
  int cont;
  string resp;
  do
  {
    cout << "Digite su edad " << endl;
    cin >> edad;
    cont = 1;
    while (cont <= edad)
    {
      cout << "Los años que has cumplido son " << cont << endl;
      cont++;
    }
    cout << "¿Quieres repetir el proceso?"<<endl;
    cin >> resp;
  }while (resp=="si");
}
