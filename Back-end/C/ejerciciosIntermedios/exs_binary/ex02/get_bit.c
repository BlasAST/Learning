#include <stdio.h>

int get_bit(int n, int pos)
{
    /* if (((n >> pos) & 1) == 1)
        return (1);
    else
        return (0); */
    return ((n >> pos) & 1);
}

int main(void)
{
    printf("%d", get_bit(244, 7));
}