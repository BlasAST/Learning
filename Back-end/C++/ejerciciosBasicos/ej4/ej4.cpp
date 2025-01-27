//  1. Leer del teclado un número positivo y comprobar si es un número perfecto. Un número es 
// perfecto si la suma de sus divisores (exceptuando el propio número) es igual a número.  Por 
// ejemplo el número 6 tiene de divisores1, 2 y 3. Si sumamos 1+2+3 = 6 , por tanto el número 
// 6  es perfecto. En cambio el número 24 tiene por divisores  1,2, 3, 4, 6 y 12. Si sumamos sus
//  divisores nos dará 30 y por tanto, el número 30 no es perfecto.


#include <iostream>
#include <vector>
using namespace std;

int numero;
vector<int>divisores; // Vector para la memoria dinámica
int leerEntrada();

int main(){
    numero=leerEntrada();
    for(int n = 1; n < numero;n++){
        if(numero%n==0){
            divisores.push_back(n);
        }
    }
    int perfecto=0;
    for(int i=0;i< divisores.size();i++){
        perfecto+=divisores[i];
    }
    // Operador ternario una vez se tiene la suma de los divisores
    numero == perfecto? cout << "El numero es un numero perfecto\n" : cout << "El numero no es un numero perfecto\n";
    
    return 0;
}
    // Entrada del usuario externa por complicarlo un 1%
int leerEntrada(){
    cout << "Indicame un numero\n";
    cin >> numero;
    return numero;
}
