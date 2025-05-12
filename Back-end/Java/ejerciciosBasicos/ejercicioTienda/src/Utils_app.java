import java.util.Scanner;
import Obj.Cliente;
import Obj.Dependiente;
import Obj.Tienda;

public class Utils_app {

	static Scanner into = new Scanner(System.in);
	public static   void login(Tienda tienda)
	{
		int opcion;
		System.out.println("Iniciando sesión");
		System.out.println("Eres cliente o trabajador:\n" +
			"1.Cliente\n" +
			"2.Trabajador\n" +
			"3.Cancelar");
		opcion = into.nextInt();
		if (opcion == 1)
			tienda.add_client(Cliente.create_client());
		else if (opcion == 2)
			tienda.add_client(Cliente.create_client());
		else if (opcion == 3)
			tienda.add_client(Cliente.create_client());
		else
			System.out.println("No se ha introducido ninguna opción valida");

	}

	public static   void register(Tienda tienda)
	{
		System.out.println("Registrandose");
	}

	public static   void consult(Tienda tienda)
	{
		System.out.println("Consultando tienda");
	}
}
