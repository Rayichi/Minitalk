/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:45:15 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/01/24 15:00:35 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_void(va_list ag)
{
	int						i;
	unsigned long long int	p;

	i = 2;
	p = (unsigned long long int) va_arg(ag, void *);
	ft_putstr_fd("0x", 1);
	i += ft_putnbr_base_p(p, "0123456789abcdef");
	return (i);
}

int	ft_char(va_list ag)
{
	char	c;

	c = (char) va_arg(ag, int);
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_str(va_list ag)
{
	char	*str;

	str = (char *)va_arg(ag, char *);
	if (str)
	{
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
	else
		ft_putstr_fd("(null)", 1);
	return (6);
}

int	ft_case_other(const char c, va_list ag)
{
	int	i;

	i = 0;
	if (c == 'u')
		i = (ft_putnbr_base((unsigned int) va_arg(ag, unsigned int),
					"0123456789"));
	else if (c == 'x')
		return (ft_putnbr_base((unsigned int) va_arg(ag, unsigned int),
				"0123456789abcdef"));
	else if (c == 'X')
		return (ft_putnbr_base((unsigned int) va_arg(ag, unsigned int),
				"0123456789ABCDEF"));
	return (i);
}

int	ft_case(const char c, va_list ag)
{
	int	i;

	i = 0;
	if (c == 'c')
		return (ft_char(ag));
	else if (c == 's')
		return (ft_str(ag));
	else if (c == 'p')
		return (ft_void(ag));
	else if (c == 'd')
		return (ft_putnbr_base((int) va_arg(ag, int), "0123456789"));
	else if (c == 'i')
		return (ft_putnbr_base((int) va_arg(ag, int), "0123456789"));
	else if (c == '%')
	{
		i = 1;
		ft_putchar_fd('%', 1);
	}
	else
		return (ft_case_other(c, ag));
	return (i);
}
