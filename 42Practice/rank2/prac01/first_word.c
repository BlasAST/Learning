#include <stdio.h>
#include <unistd.h>

int main(int argn, char **args)
{
	int i;

	i = 0;
	if (argn == 2)
	{
		while (args[1][i] == ' ' && args[1][i] != '\0')
			i++;
		while (args[1][i] != ' ' && args[1][i] != '\0')
		{
			write(1, &args[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}