/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:59:54 by skvackov          #+#    #+#             */
/*   Updated: 2024/06/18 14:11:53 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int ft_printchar(int c);
int ft_printhexadecimallower(int number);
int ft_printhexadecimalupper(int number);
int ft_printpointer(void *ptr);
int ft_printunsignedint(unsigned int number);
#endif
