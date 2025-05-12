package Obj;

import java.time.LocalTime;

public class Cliente extends Persona{

	private static int	identificador = 0;
	private LocalTime	horaDeEntrada;

	public Cliente(String nombre, String apellidos, int edad)
	{
		super(nombre, edad, apellidos);
		identificador++;
		this.horaDeEntrada = LocalTime.now();
	}

	public static	Cliente create_client()
	{
		Cliente cliente;
		System.out.println("Indicame el nombre del cliente");
		String nombre = into.nextLine();
		System.out.println("Apellidos:");
		String apellidos = into.nextLine();
		System.out.println("Edad:");
		int edad = into.nextInt();
		cliente =  new Cliente(nombre, apellidos, edad);
		return (cliente);
	}
}
