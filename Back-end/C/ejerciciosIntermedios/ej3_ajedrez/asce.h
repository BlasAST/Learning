#ifndef ASCE_H
#define ASCE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wchar.h>
#include <locale.h>
#include <iconv.h>

void ft_putwchar(wchar_t n)
{
    wprintf(L"%lc", n);
}
void add_space_y()
{
    int i;

    i = 0;
    while (i < 2)
    {
        wprintf(L"\n\n");
        i++;
    }
}
void add_space_x()
{
    int i;

    i = 0;
    while (i <= 6)
    {
        if (i == 3)
        wprintf(L"|");
        else
        wprintf(L" ");
        i++;
    }
    
}
#endif