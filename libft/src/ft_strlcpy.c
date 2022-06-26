/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:00:42 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/06 13:00:42 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char const *src, size_t num)
{
	int	i;

	i = 0;
	if (num > 0)
	{
		while (src && src[i] && (num - 1))
		{
			dest[i] = src[i];
			i++;
			num--;
		}
		dest[i] = 0;
	}
	return (ft_strlen(src));
}
