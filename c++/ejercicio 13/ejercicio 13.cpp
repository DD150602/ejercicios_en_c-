#include <iostream>
using namespace std;
int main() {
  string resp;
  do {
    int tam[] = {15, 45, 65, 34, 10, 1, 2, 3, 4, 5, 6, 7, 8, 90};
    int x;
    cout << "digite un numero que crea que esta dentro del vector" << endl;
    cin >> x;
    int i;
    int indice = -1;
    for (i = 0; i < sizeof(tam); i++) {
      int numactual = tam[i];
      if (numactual == x) {
        cout << "el numero si se encuentra en el vactor" << endl;
      }
    }
    cout << "¿quiere intentarlo denuevo?" << endl;
    cin >> resp;
  } while (resp == "si");
  return 0;
}
