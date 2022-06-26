/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:58:25 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/12/22 10:21:10 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	else if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*ft_fill(long n, char *str, int size)
{
	int	i;
	int	nb;

	i = 1;
	nb = 1;
	if (n < 0)
		nb = -1;
	while (i - 1 < size || n != 0)
	{
		str[size - i++] = (n * nb) % 10 + '0';
		n = n / 10;
	}
	if (nb < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_size(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = 0;
	str = ft_fill(n, str, size);
	return (str);
}
