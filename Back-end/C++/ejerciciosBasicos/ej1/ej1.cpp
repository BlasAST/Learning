// *  1º  Que pida un número y diga si es mayor de 100.
#include <iostream>

using namespace std;

void pedirNumeros();
int main(){
    pedirNumeros();
    return 0;
}

void pedirNumeros(){
    int numero;
    cout << "Indicame un numero: ";
    cin>> numero;
    numero < 100 ?
    cout << "El numero es menor que 100\n" : cout << "El numero es mayor o igual que 100\n";
}



