/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printinsignedint.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:55:25 by skvackov          #+#    #+#             */
/*   Updated: 2024/06/20 17:12:58 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printinsignedint(unsigned int nuber)
{
	char	*ptr;
	int		getlenght;

	ptr = ft_second_itoa(nuber);
	getlenght = ft_strlen(ptr);
	ft_printstring(ptr);
	free(ptr);
	return (getlenght);
}

static int	ft_printstring(char *str)
{
	int	counting;

	if (!str)
		return (0);
	counting = 0;
	while (str[counting] != '\0')
	{
		write(1, &str[counting], 1);
		counting++;
	}
	return (counting);
}

static unsigned int	getlenghtofn(unsigned int ok)
{
	unsigned int	lenghtofthenb;

	lenghtofthenb = 0;
	if (ok <= 0)
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

static char	*ft_sencond_itoa(unsigned int n)
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
	if (n < 0)
	{
		thenumber[0] = '-';
		tempn = -tempn;
	}
	if (n == 0)
		thenumber[0] = '0';
	while (tempn > 0)
	{
		thenumber[--lenghtofthenb] = (tempn % 10) + '0';
		tempn = tempn / 10;
	}
	return (thenumber);
}
