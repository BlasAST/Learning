
import java.util.Scanner;

import Obj.Tienda;

public class App {

	static Scanner into = new Scanner(System.in);
	static Tienda tienda =  new Tienda();
	public static void main(String[] args) throws Exception {
		System.out.println("Bienvenido a la tienda online");
		menu();

	}

	public static void menu()
	{
		int	opcion;

		opcion = 0;
		while (opcion != 4)
		{
			System.out.println("Selecciona una opción: \n" +
			"1. Iniciar Sesión\n" +
			"2. Registrarse\n" +
			"3. Consultar productos\n");
			opcion = into.nextInt();
			if (opcion != 0)
				selection(opcion);
		}
		System.out.println("Has terminado el programa");
	}

	public static void	selection(int opcion)
	{
		switch (opcion)
		{
			case 1:
				Utils_app.login(tienda);
			break;
			case 2:
				Utils_app.register(tienda);
			break;
			case 3:
				Utils_app.consult(tienda);
			break;
			case 4:
				System.out.println("Hasta la proxima");
			break;
			default:
				System.out.println("Introduce un valor valido");
				break;
		}
	}
}
