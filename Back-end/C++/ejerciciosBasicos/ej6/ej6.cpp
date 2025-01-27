//*  11º Realizar el ejercicio en el que se ingrese 4 notas del alumno, mostrar el promedio de las 4 notas 
//* e indicar si está APROBADO caso contrario NO APROBADO.

#include <iostream>

using namespace std;
int main(){
    cout << "Vamos a ver si has aprobado el curso\n";
    int nota,totalNotas=0;
    for(int i=0; i< 4;i++){
        cout << "Indicame la " << i+1 << " nota:\n";
        cin >> nota;
        totalNotas+=nota;
    }
    cout << "De media tienes un: " << totalNotas / 4 << endl;
    totalNotas / 4 >= 5? cout << "Has aprobado!!\n": cout << "Has suspendido :(\n";
    return 0;
}