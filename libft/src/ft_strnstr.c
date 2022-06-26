/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:00:32 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/06 13:00:32 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *str, char const *to_find, size_t n)
{
	size_t	a;
	size_t	i;

	a = ft_strlen(str);
	a = ft_strlen(to_find);
	i = 0;
	if (a == 0)
		return ((char *)str);
	if (a > n)
		return (NULL);
	while (str[i] && (n - a) >= i && to_find[0])
	{
		if (!ft_strncmp(&str[i], to_find, a))
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
