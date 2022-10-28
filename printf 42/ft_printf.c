/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:45:21 by mmounaji          #+#    #+#             */
/*   Updated: 2022/10/28 11:10:03 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format_specifier(va_list args, const char s)
{
	int	printed;

	printed = 0;
	if (s == 'c')
		printed += ft_put_char(va_arg(args, int));
	else if (s == 's')
		printed += ft_put_str(va_arg(args, char *));
	else if (s == 'p')
	{
		printed += ft_put_str("0x");
		printed += ft_put_ptr(va_arg(args, unsigned long));
	}
	else if (s == 'd' || s == 'i')
		printed += ft_put_nbr(va_arg(args, int));
	else if (s == 'u')
		printed += ft_put_unsigned(va_arg(args, unsigned int));
	else if (s == 'x')
		printed += ft_put_nbr_base(va_arg(args, unsigned int), s);
	else if (s == 'X')
		printed += ft_put_nbr_base(va_arg(args, unsigned int), s);
	else if (s == '%')
		printed += ft_put_char('%');
	return (printed);
}

int	ft_printf(const char *s, ...)
{
	int			i;
	va_list		args;
	int			printed;

	i = 0;
	printed = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == '\0')
				break ;
			else
			{
				printed += ft_format_specifier(args, s[i + 1]);
				if (printed)
					i++;
			}
		}
		else
			printed += ft_put_char(s[i]);
		i++;
	}
	va_end(args);
	return (printed);
}
