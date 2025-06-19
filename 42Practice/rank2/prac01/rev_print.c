#include <unistd.h>

void    ft_print(char   *str)
{
    if (*str != '\0')
    {
        ft_print(str + 1);
        write (1, str, 1);
    }
}

int main(int argn, char **args)
{
    if (argn == 2)
        ft_print(args[1]);
    write(1, "\n", 1);
    return (0);
}