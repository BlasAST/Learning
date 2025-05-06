
package Obj;

public class Persona {
    public String Nombre;
    public int Edad;
    public String Apellidos;
    
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
