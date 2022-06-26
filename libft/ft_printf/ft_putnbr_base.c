/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:57:05 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/30 18:57:05 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_put_base(long long nb, char *base, int size)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb = -nb;
		i++;
	}
	if (nb > size - 1)
		i += ft_put_base(nb / size, base, size);
	ft_putchar_fd(base[nb % size], 1);
	return (++i);
}

int	ft_putnbr_base(long long nb, char *base)
{
	size_t	i;

	i = ft_strlen(base);
	return (ft_put_base(nb, base, i));
	return (0);
}

static int	ft_put_base2(unsigned long long int nb, char *base, int size)
{
	int	i;

	i = 0;
	if ((int) nb > size - 1)
		i += ft_put_base2((unsigned long long)(nb / size), base, size);
	ft_putchar_fd(base[nb % size], 1);
	return (++i);
}

int	ft_putnbr_base_p(unsigned long long int nb, char *base)
{
	return (ft_put_base2(nb, base, 16));
}
