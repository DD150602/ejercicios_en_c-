// Este ejercicio es para verofocar si un numeroe  par
#include <iostream>
using namespace std;
bool verificarpar(int num);
char verificarvalorrectanumerica(int num2);

int main() {

  int num1;
  int opc;
  string resp;
  do {
    cout << "digite un numero" << endl;
    cin >> num1;
    cout << "digite 1 para ver si su numero es paro impar, digite 2 si quiere "
            "saber si su numero es positivo o negativo"
         << endl;
    cin >> opc;

    switch (opc) {
    case 1:
      if (verificarpar(num1)) {
        cout << num1 << " es par" << endl;
      } else {
        cout << num1 << " no es par" << endl;
      }
      break;
    case 2: {
      cout << "Su numero corresponde a: " << verificarvalorrectanumerica(num1)
           << endl;
      cout << "recuerde que :" << endl;
      cout << "P es un numero positivo" << endl;
      cout << "N es un numero negativo " << endl;
      cout << "C es cero" << endl;
    } break;
    }
    cout << "¿Desea empezar el proceso de nuevo?" << endl;
    cin >> resp;
  } while (resp == "si");
}

// La función que permita retornar un valor booleano que indica verdadero (true)
// en caso de ser un número par o falso (false) en caso contrario.

bool verificarpar(int num) {

  if (num % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

// La función que retorna un char para indicar
char verificarvalorrectanumerica(int num2) {
  if (num2 < 0) {
    return 'N';
  } else if (num2 > 0) {
    return 'P';
  } else if (num2 == 0) {
    return 'C';
  }
}
