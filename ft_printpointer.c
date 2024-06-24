#include "libftprintf.h"
int ft_printpointer(void *ptr)
{
    unsigned long adress = (unsigned long)oki;
    int lenght = 2;

    ft_printchar(0);
    ft_printchar(x);
    lenght += ft_printhexadecimallower(adress);
    return(lenght);
}
