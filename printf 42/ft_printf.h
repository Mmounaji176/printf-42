/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounaji <mmounaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:07:15 by mmounaji          #+#    #+#             */
/*   Updated: 2022/10/27 20:30:26 by mmounaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printf(const char *s, ...);
int		ft_put_ptr(unsigned long nb);
int		ft_put_char(const char c);
int		ft_put_str(char *s);
int		ft_put_nbr(int nb);
int		ft_put_nbr_base(unsigned int nb, const char s);
int		ft_put_unsigned(unsigned int n);

#endif
