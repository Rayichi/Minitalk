/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:28:15 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/01/24 09:19:28 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr2(long n, int fd)
{
	if (n >= 10)
		ft_putnbr2(n / 10, fd);
	ft_putchar_fd('0' + n % 10, fd);
}

void	ft_putnbr_fd(int nb, int fd)
{
	long	n;

	n = nb;
	if (fd < -1)
		return ;
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}
	ft_putnbr2(n, fd);
}
