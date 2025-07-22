#include <stdio.h>

int es_par(int  n)
{
    if ((n & 1) != 0)
        return (1);
    else
        return (0);
}

int main(void)
{
    printf("%d", es_par(220));
}