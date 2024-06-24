#include "libftprintf.h"

static int ft_hexlenght(int nuber)
{
    int lenght = 0;
    if(nuber == 0)
        return 1;
    while(nuber != 0)
    {
        nuber = nuber/16;
        lenght++;
    }
    return(lenght);
}

static void ft_puthex(int nuber)
{

    if(nuber >= 0 && nuber <= 9)
        ft_printchar(nuber + '0');
    else if(nuber >= 10 && nuber <= 15)
        ft_printchar(nuber - 10 + 'a');

    else
    {
    ft_puthex(nuber/16);
    ft_puthex(nuber%16);
    }
}

int ft_printhexadecimallower(int number)
{
    int lenght = ft_hexlenght(number);
    ft_puthex(number);
    return(lenght);
}
