#include <iostream>
using namespace std;
int main() {
  int num1;
  int num2;
  int i = 0;
  string resp;

  do {
    cout << "digite el rango del contador" << endl;
    cin >> num1;
    cout << "digite el intervalo del contador" << endl;
    cin >> num2;

    if (num1 < 0 || num2 < 0) {
      cout << " Es incorrecto. Digite un numero positivo" << endl;
    } else {

      if (num1 < num2) {
        cout << "El rango no puede ser menor al intervalo" << endl;
      } else {
        for (i = 0; i <= num1; i += num2) {
          cout << i << endl;
        }
      }
    }

    cout << "¿Desea continua?" << endl;
    cin >> resp;

  } while (resp == "si" || resp == "Si" || resp == "SI" || resp == "s" || resp == "S");

  return 0;
}
