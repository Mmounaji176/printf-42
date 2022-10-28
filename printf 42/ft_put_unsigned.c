/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:30:30 by mmounaji          #+#    #+#             */
/*   Updated: 2022/10/27 18:12:44 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	str_size_count(unsigned int n)
{
	int	i;

	i = 2;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_utoa(unsigned int n)
{
	int		i;
	int		length;
	char	*str;

	i = 0;
	length = str_size_count(n);
	str = malloc(sizeof(char) * length);
	if (!str)
		return (NULL);
	str[--length] = '\0';
	length --;
	while (length >= i)
	{
		str[length] = n % 10 + '0';
		n /= 10;
		length--;
	}
	return (str);
}

int	ft_put_unsigned(unsigned int n)
{
	char	*str;
	int		printed;

	printed = 0;
	str = ft_utoa(n);
	printed += ft_put_str(str);
	free(str);
	return (printed);
}
