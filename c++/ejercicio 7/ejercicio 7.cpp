#include <iostream>
using namespace std;

int main() {
    int num;
    int i;
    bool primo = true;
    string resp;
    do{
    cout<<"digite algun numero"<<endl;
    cin>>num;
    for (i = 2; i < num ; i++){
        if(num % i == 0){
            primo = false;
            }
    }
    if (primo==true){
        cout<<"el numero es primo"<<endl;
    }else{
        cout<<"el numero no es primo"<<endl;
    }
    cout<< "qiuere hacerlo otravez"<<endl;
    cin>>resp;
    }while(resp=="si");
    return 0;
}
