#include <iostream>
using namespace std;
int main() {
  int tam;

  cout << "Digite cantidad : " << endl;
  cin >> tam;
  int edad[tam];
  int i;

  for (i = 0; i < tam; i++) {
    cout << "Digite valor #" << i << endl;
    cin >> edad[i];
  }

  return 0;
}
