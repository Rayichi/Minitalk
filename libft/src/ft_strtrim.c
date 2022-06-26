/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:23:46 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/08 17:23:46 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char const c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (0);
		set++;
	}
	return (1);
}

static int	ft_size(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1 && s1[i])
		i++;
	i--;
	while (s1 && i > 0 && !(ft_inset(s1[i], set)))
		i--;
	i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	while (s1 && s1[i] && !(ft_inset(s1[i], set)))
		i++;
	k = 0;
	j = ft_size(s1, set);
	if (i > j)
		i = j;
	str = malloc(sizeof(char) * (1 + (j - i)));
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	str[k] = 0;
	return (str);
}
