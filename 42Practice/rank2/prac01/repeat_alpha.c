#include <unistd.h>

int main(int argn, char **args)
{
	int		i;
	char	c;
	char	iterator;

	i = 0;
	if (argn == 2)
	{
		while (args[1][i] != '\0')
		{
			if ((args[1][i] >= 'A' && args[1][i] <= 'Z')
				|| (args[1][i] >= 'a' && args[1][i] <= 'z'))
			{
					c = args[1][i];
					iterator = args[1][i];
					while (iterator != 'A' - 1 && iterator != 'a' - 1)
					{
						write (1, &c, 1);
						iterator--;
					}
			}
			else
				write (1, &args[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}


