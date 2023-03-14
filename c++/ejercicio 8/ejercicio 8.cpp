#include <iostream>
using namespace std;
int main() {
  char vocal;
  string resp;
  do {
    cout << "digite una letra" << endl;
    cin >> vocal;
    switch (vocal) {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
      cout << vocal << " es una vocal" << endl;
      break;
    default:
      cout << vocal << " no es una vocal" << endl;
    }
    cout << "Desea repetir el proceso " << endl;
    cin >> resp;
  } while (resp == "si" || resp == "SI");
}
