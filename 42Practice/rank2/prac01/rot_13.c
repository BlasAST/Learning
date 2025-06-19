#include <unistd.h>

int main(int argn, char **args)
{
	int	i;
	int	calc;
	char	c;

	i = 0;
	if (argn == 2)
	{
		while (args[1][i] != '\0')
		{
			if (args[1][i] >= 'a' && args[1][i] <= 'z')
			{
				if (args[1][i] + 13 > 'z')
				{
					calc = args[1][i] + 13 - 'z';
					c = 'a' + calc - 1;
				}
				else
					c = args[1][i] + 13;
			}
			else if (args[1][i] >= 'A' && args[1][i] <= 'Z')
			{
				if (args[1][i] + 13 > 'Z')
				{
					calc = args[1][i] + 13 - 'Z';
					c = 'A' + calc - 1;
				}
				else
					c = args[1][i] + 13;
			}
			else
				c = args[1][i];
			write(1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);
}