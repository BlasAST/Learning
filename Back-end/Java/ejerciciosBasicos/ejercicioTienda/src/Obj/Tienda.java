package Obj;

import java.util.ArrayList;
import java.util.List;


public class Tienda {
	public List <Cliente>	clientes;
	public List <Dependiente> dependientes;
	public Tienda()
	{
		clientes = new ArrayList<Cliente>();
		dependientes = new ArrayList<Dependiente>();
	}
	public List<Cliente> getClientes() {
		return clientes;
	}
	public List<Dependiente> getDependientes() {
		return dependientes;
	}

	public void add_client(Cliente cliente)
	{
		clientes.add(cliente);
	}

	public Cliente	search_client(Cliente cliente)
	{
		Cliente cli_temp;

		for (int i = 0; i < this.clientes.size(); i++)
		{
			cli_temp = clientes.get(i);
			if (cliente.equals(cli_temp))
				return (cli_temp);
		}
		return (null);
	}
}
