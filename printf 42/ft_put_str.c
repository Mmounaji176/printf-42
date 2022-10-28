/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:21:57 by mmounaji          #+#    #+#             */
/*   Updated: 2022/10/28 10:40:13 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_str(char *s)
{
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	if (s == NULL)
		printed += ft_put_str("(null)");
	else
	{	
		while (s[i])
		{
			ft_put_char(s[i++]);
			printed++;
		}
	}
	return (printed);
}
