
#include "unistd.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int	main(int argn, char **args)
{
	int		i;
	char	c;

	i = 0;
	if (argn > 1)
	{
		while(args[i] != NULL)
		{
			write(1, args[i], ft_strlen(args[i]));
			i++;
		}
	}

	return (0);
}