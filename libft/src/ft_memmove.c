/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:00:56 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/06 13:00:56 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	if ((size_t)dest < (size_t)src)
	{
		while (num--)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = 1;
		while (num >= i)
		{
			((unsigned char *)dest)[num - i] = ((unsigned char *)src)[num - i];
			i++;
		}
	}
	return (dest);
}
