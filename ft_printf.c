/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:10:27 by skvackov          #+#    #+#             */
/*   Updated: 2024/06/18 18:10:22 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

static int ft_printchar(int c)
{
	write(1, &c, 1);
	return 1;
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
static int ft_printnumber (int number)
{
	char *str = ft_itoa(number);
	int howlong = ft_strlen(str);
	while()

}
static int printtype(char str, va_list args)
{
	int chartoreturn = 0;

	if(str == '%')
		chartoreturn += ft_printchar('%');
	else if(str == 'c')
		chartoreturn += ft_printchar(va_arg(args, int));
	else if(str == 's')
		chartoreturn += ft_printstring(va_arg(args, char *));
	else if(str == 'p')
		chartoreturn +=  ft_printpointer(va_arg(args, void *));
	else if(str == 'd' || str == 'i')
		chartoreturn += ft_printnumber(va_arg(args, int));
	else if(str == 'u')
		chartoreturn += ft_printinsignedint(va_arg(args, unsigned int));
	else if(str == 'x')
		chartoreturn += ft_printhexadecimallower(va_arg(args, int));
	else if(str == 'X')
		chartoreturn += ft_printhexadecimalupper(va_arg(args, int));
	return(chartoreturn);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		chartoretrun;

	va_start(args, str);
	i = 0;
	chartoretrun = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			chartoretrun += printtype((char)str[i++], args);
		}
		else
		{
			chartoretrun += write(1, &str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (chartoretrun);
}
