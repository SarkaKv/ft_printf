#include "libftprintf.h"
int ft_printpointer(void *ptr)
{
    int *oki = (int *)ptr;
    int adress = (int)oki;
    int lenght = 2;

    ft_printchar(0);
    ft_printchar(x);
    leght += ft_printhexadecimallower(adress);
    return(lenght);
}
