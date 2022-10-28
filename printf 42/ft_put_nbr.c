/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:08:14 by mmounaji          #+#    #+#             */
/*   Updated: 2022/10/27 19:08:33 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr(int nb)
{
	int				count;
	unsigned int	b;

	count = 0;
	b = nb;
	if (nb < 0)
	{
		count += ft_put_char('-');
		b = b * -1;
	}
	if (b >= 0 && b <= 9)
	{
		count += ft_put_char(b + 48);
	}
	else
	{
		count += ft_put_nbr(b / 10);
		count += ft_put_nbr(b % 10);
	}
	return (count);
}
