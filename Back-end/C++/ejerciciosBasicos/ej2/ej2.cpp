// 2º  Que pida una letra y detecte si es una vocal.

#include <iostream>
#include <string>
using namespace std;

string cadena;
int main(){
    cout << "Indicame una letra y te dire si es una vocal\n";
    cin >> cadena;
    string vocales[]= {"A","E","I","O","U","a","e","i","o","u"};
    if(cadena.length() > 1) cadena=cadena[0];
    cout << "La letra elegida es: "<<cadena << endl;

    for(int c=0;c<sizeof(vocales)/sizeof(vocales[0]);c++){
        if(vocales[c]==cadena){
            cout << "La letra es una vocal" << endl;
            return 0;
        }
    }
    cout << "La letra no es una vocal" << endl;
    return 0;
}
    // * Opcion basica
    // if(cadena=="A"||cadena=="E"||cadena=="I"||cadena=="O"||cadena=="U"||
    // cadena=="a"||cadena=="e"||cadena=="i"||cadena=="o"||cadena=="u"){
        // cout << "La letra es una vocal!" << endl;
    // }else{
        // cout << "La letra no es una vocal" << endl;}