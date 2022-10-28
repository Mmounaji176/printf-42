/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:17:11 by mmounaji          #+#    #+#             */
/*   Updated: 2022/10/27 19:20:51 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_put_nbr_base(unsigned int nb, const char s)
{
	int				printed;
	unsigned int	b;
	unsigned int	len_base;
	char			*base;

	printed = 0;
	if (s == 'X')
		base = "0123456789ABCDEF";
	else if (s == 'x')
		base = "0123456789abcdef";
	len_base = ft_strlen(base);
	b = nb;
	if (b < len_base)
		printed += ft_put_char(base[b]);
	else
	{
		printed += ft_put_nbr_base(b / len_base, s);
		printed += ft_put_nbr_base(b % len_base, s);
	}
	return (printed);
}
