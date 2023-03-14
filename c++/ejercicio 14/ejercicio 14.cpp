#include <iostream>
using namespace std ;
 double promediar(int num1 , int num2 );
 int sumar (int num1 , int num2 );
int main() {
  int opc;
  string resp;
  int num1 ;
  int num2 ;
  do{

  cout << "Digite un numero "<<endl ;
  cin>> num1 ;

    cout << "Digite un numero "<< endl  ;
  cin>> num2 ;

  cout << "1.Sumar  "<<endl<<"2.promediar "<<endl ;
  cin>> opc ;


    switch (opc)
      {
        case 1:
          cout << "La suma  es  "<<sumar(num1,num2)<<endl;
        break ;



        case 2:
          cout << "El promedio es  "<< promediar(num1,num2)<<endl;
        break ;

      }

    cout << "Desea repetir el proceso  "<< endl;
    cin>> resp;


    }while(resp=="si"|| resp=="Si"||resp=="SI"||resp=="S"||resp=="s");
}


 int sumar (int num1 , int num2 )
  {
    int resultado ;
    resultado = num1+num2 ;
    return resultado;
  }


 double promediar(int num1 , int num2  )
  {
    double resultado ;
    resultado = sumar (num1 , num2);
    return (resultado/2);
  }
