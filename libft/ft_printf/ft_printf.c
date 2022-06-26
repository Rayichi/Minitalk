/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:46:02 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/12/03 16:46:02 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	ag;
	int		i;

	va_start(ag, format);
	i = 0;
	while (format && *format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format, 1);
			i++;
		}
		else
		{
			format++;
			i += ft_case(*format, ag);
		}
		format++;
	}
	return (i);
}
