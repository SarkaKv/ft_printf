#include "ft_printf.h"

int ft_strleni(const char *str)
{
	int	ok;

	ok = 0;
	while (str[ok] != '\0')
	{
		ok++;
	}
	return (ok);
}

static int ft_printstring(char *str)
{
	if(!str)
		return(0);
	int counting = 0;
	while(str[counting] != '\0')
	{
		write(1, &str[counting], 1);
		counting ++;
	}
	return(counting);
}
static int	getlenghtofn(unsigned int ok)
{
	unsigned int	lenghtofthenb;

	lenghtofthenb = 0;
	if (ok == 0)
	{
		lenghtofthenb++;
	}
	while (ok != 0)
	{
		ok = ok / 10;
		lenghtofthenb++;
	}
	return (lenghtofthenb);
}

static char	*my_second_itoa(unsigned int n)
{
	char			*thenumber;
	size_t			lenghtofthenb;
	unsigned int	tempn;

	lenghtofthenb = getlenghtofn(n);
	tempn = (unsigned int)n;
	thenumber = (char *)malloc(sizeof(char) * (lenghtofthenb + 1));
	if (!thenumber)
		return (NULL);
	thenumber[lenghtofthenb] = '\0';
	if (n == 0)
		thenumber[0] = '0';
	while (tempn > 0)
	{
		thenumber[--lenghtofthenb] = (tempn % 10) + '0';
		tempn = tempn / 10;
	}
	return (thenumber);
}
int ft_printunsignedint(unsigned int number)
{
    char *ptr = my_second_itoa(number);
    int mylenght = ft_strleni(ptr);
    ft_printstring(ptr);
    free(ptr);
    return(mylenght);
}
