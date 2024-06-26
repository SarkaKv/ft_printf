/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:59:54 by skvackov          #+#    #+#             */
/*   Updated: 2024/06/24 16:28:58 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_printhexadecimallower(unsigned int number);
int	ft_printhexadecimalupper(unsigned int number);
int	ft_printchar(int c);
int	ft_printstring(char *str);
int	ft_printunsignedint(unsigned int nuber);
int	ft_printpointer(void *ptr);
int ft_strleni(conts char *str);
#endif
