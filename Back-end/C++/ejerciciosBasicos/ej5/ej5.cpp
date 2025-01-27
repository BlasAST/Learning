//* 10º Que calcule el sueldo que le corresponde al trabajador de una empresa que cobra 40.000 euros 
// * anuales, el programa debe realizar los cálculos en función de los siguientes criterios:
// *  a.       Si lleva más de 10 años en la empresa se le aplica un aumento del 10%.
// *  b.       Si lleva menos de 10 años pero más que 5 se le aplica un aumento del 7%.
// *  c.       Si lleva menos de 5 años pero más que 3 se le aplica un aumento del 5%.
// *  d.       Si lleva menos de 3 años se le aplica un aumento del 3%.

#include <iostream>
using namespace std;

int main(){
    int salario,tiempoEnEmpresa;
    cout << "Introduce tu salario\n";
    cin >> salario;
    cout << "Cuanto tiempo llevas en la empresa\n";
    cin >> tiempoEnEmpresa;
    if(tiempoEnEmpresa<=3){
        salario=salario+salario*0.03;
    }else if(tiempoEnEmpresa <=5){
        salario=salario+salario*0.05;
    }else if(tiempoEnEmpresa <10){
        salario=salario+salario*0.07;
    }else{
        salario=salario+salario*0.1;
    }
    cout << "Tu salario con aumentos es: " << salario << endl;
    return 0;
}