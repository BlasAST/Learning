#include <unistd.h>

void	search_and_replace(char	*str, char *c, char *nc)
{
	int	i;
	int	index;

	i = 0;
	while (str[i] != '\0')
	{
		index = 0;
		while (str[i] == c[index])
		{
			i++;
			index++;
		}
		if (c[index] == '\0')
		{
			i -= index;
			index = 0;
			while (str[i] == c[index])
			{
				write(1, &nc[index], 1);
				i++;
				index++;
			}
			i--;
		}
		else
		{
			i -= index;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argn, char **args)
{
	if (argn == 4)
	{
		search_and_replace(args[1], args[2], args[3]);
	}
	write(1, "\n", 1);
}