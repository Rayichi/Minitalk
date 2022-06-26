/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:23:51 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/08 17:23:51 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			len2;
	char			*str;

	i = 0;
	len2 = 0;
	if (!s)
		return (0);
	while (s && s[i] && i < start)
		i++;
	while (s && s[i + len2] && len2 < len)
		len2++;
	str = malloc(sizeof(char) * (len2 + 1));
	if (!str)
		return (NULL);
	len2 = 0;
	while (s[len2 + i] && len2 < len)
	{
		str[len2] = s[len2 + i];
		len2++;
	}
	str[len2] = '\0';
	return (str);
}
