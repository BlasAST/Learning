#include <stdio.h>

int main(void)
{
    unsigned int a = 20; // 0001 0100
    unsigned int b = 14; // 0000 1110
                        // 00011010
    int c;

    c = a >> b;
    printf("%d", c);
}