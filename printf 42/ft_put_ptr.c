/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:19:31 by mmounaji          #+#    #+#             */
/*   Updated: 2022/10/27 19:56:45 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(unsigned long nb)
{
	int				printed;
	char			*base;

	printed = 0;
	base = "0123456789abcdef";
	if (nb < 0)
	{
		printed += ft_put_char('-');
		nb = nb * -1;
	}
	if (nb < 16)
		printed += ft_put_char(base[nb]);
	else
	{
		printed += ft_put_ptr(nb / 16);
		printed += ft_put_ptr(nb % 16);
	}
	return (printed);
}
