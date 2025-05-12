
package Obj;

import java.util.Scanner;

public class Persona {
    public String Nombre;
    public int Edad;
    public String Apellidos;
    static Scanner into =  new Scanner(System.in);
    
    public Persona(String nombre, int edad, String apellidos) {
        Nombre = nombre;
        Edad = edad;
        Apellidos = apellidos;
    }

    public String getNombre() {
        return Nombre;
    }

    public int getEdad() {
        return Edad;
    }

    public String getApellidos() {
        return Apellidos;
    }
    
}
