/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:53:33 by skvackov          #+#    #+#             */
/*   Updated: 2024/06/24 16:23:16 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(void *ptr)
{
	unsigned long	adress;
	int				lenght;

	adress = (unsigned long)ptr;
	lenght = 2;
	ft_printchar('0');
	ft_printchar('x');
	lenght += ft_printhexadecimallower(adress);
	return (lenght);
}
