#include <iostream>
using namespace std;
int main() {
  int tam;

  string resp;
  do {
    do {
      cout << "Digite cantidad de personas a registrar:  " << endl;
      cin >> tam;
    } while (tam < 0);
    int edad[tam];
    string nom[tam];
    float esta[tam];

    int i;

    for (i = 0; i < tam; i++) {
      cout << "ingrese los datos del usuario # " << i + 1 << endl;

      cout << "Digite su nombre   " << endl;
      cin >> nom[i];
      do {
        cout << "Digite su edad  " << endl;
        cin >> edad[i];
      } while (edad[i] < 0);
      do {
        cout << "Digite su estarura  " << endl;
        cin >> esta[i];
      } while (esta[i] < 0);
    }

    for (i = 0; i < tam; i++) {
      cout << "los datos de los usuarios son: " << i + 1 << endl;
      cout << "nombre: " << nom[i] << endl;
      cout << "edad: " << edad[i] << endl;
      cout << "estatura: " << esta[i] << endl;
    }
    cout << "quiere inicier el proceso nuevamente" << endl;
    cin >> resp;
  } while (resp == "si" || resp == "SI" || resp == "S" || resp == "s");

  return 0;
}
