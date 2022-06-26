/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:22:56 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/08 17:22:56 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word(char const *str, char set)
{
	int	up;
	int	mot;

	up = 1;
	mot = 0;
	while (*str && str)
	{
		if (*str == set)
			up = 1;
		else if (up == 1)
		{
			mot++;
			up = 0;
		}
		str++;
	}
	return (mot);
}

static	int	ft_strlen_split(char const *str, char set)
{
	int	i;

	i = 0;
	while (*str && str && *str == set)
		str++;
	while (str[i] && !(str[i] == set))
		i++;
	return (i + 1);
}

static char const	*ft_strcopy_split(char const *str, char *sdef, char set)
{
	while (*str && str && *str == set)
		str++;
	while (str && *str && !(*str == set))
	{
		*sdef = *str;
		str++;
		sdef++;
	}
	*sdef = 0;
	return (str);
}

static void	ft_free(char **sdef, int i)
{
	while (--i >= 0)
	{
		free(sdef[i]);
	}
	free(sdef);
	sdef = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**sdef;
	int		word;

	i = 0;
	if (!s)
		return (NULL);
	word = ft_word(s, c);
	sdef = malloc(sizeof(char *) * (word + 1));
	if (!sdef)
		return (NULL);
	sdef[word] = NULL;
	while (i < word)
	{
		sdef[i] = malloc(ft_strlen_split(s, c));
		if (sdef[i] == NULL)
		{
			ft_free(sdef, i);
			return (NULL);
		}
		s = ft_strcopy_split(s, sdef[i], c);
		i++;
	}
	return (sdef);
}
