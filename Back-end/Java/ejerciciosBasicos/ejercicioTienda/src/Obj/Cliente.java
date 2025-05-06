package Obj;

import java.time.LocalTime;
import java.util.Locale;

public class Cliente extends Persona{

	String	identificador;
	LocalTime	horaDeEntrada;

	public Cliente(String nombre, String apellidos, int edad,String identificador, String entrada)
	{
		super(nombre, edad, apellidos);
		this.identificador = identificador;
		this.horaDeEntrada = LocalTime.parse(entrada);
	}
}
