#include <stdio.h>
#include <unistd.h>

int	main(int argn, char **args)
{
	int	i;
	char	c;

	i = 0;
	if (argn > 1)
	{
		c = 'z';
		while (args[1][i] != '\0')
		{
			c = args[1][i];
			if (args[1][i] == 'z' || args[1][i] == 'Z')
				c -= 26;
			c++;
			if ((args[1][i] >= 'A' && args[1][i] <= 'Z')
			|| (args[1][i] >= 'a' && args[1][i] <= 'z'))
				write(1, &c , 1);
			else
				write(1, &args[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}