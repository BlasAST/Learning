// 5. En una empresa trabajan n empleados cuyos sueldos oscilan entre 100€ y 1000€. Realizar un
//  programa que lea el sueldo de los trabajadores y que informe de cuantos empleados cobran 
// menos de 500€ y cuantos más de 500€. Informar también del total que gasta la empresa en 
// pagar a sus empleados.

#include <iostream>
using namespace std;

int main(){
    int trabajadoresTotales,menor500=0,mayor500=0,gastoTotal=0;
    cout << "Indicame cuantos trabajadores trabajan en tu empresa\n";
    cin >> trabajadoresTotales;
    for(int i=1;i<=trabajadoresTotales;i++){
        int salario;
        cout << "Indicam el salario del trabajador "<< i << endl;
        cin >> salario;
        gastoTotal+=salario;
        if(salario>=500)
            mayor500+=1;
        else
            menor500+=1;
    }

    cout << "Los empleados que cobran menos de 500€ son: " << menor500 << ", los que cobran más de 500 son: " << mayor500 
    << " y el total de dinero que gasta la empresa en pagar a los trabajadores es: " << gastoTotal << endl;

    return 0;
}