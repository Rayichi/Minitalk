/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:00:26 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/06 13:00:26 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*je suis giga con je pouvais faire strlen puis décrémenter 
pour renvoyer la premiere occurence en partant de la fin */

char	*ft_strrchr(char *str, int c)
{
	char	*s;

	s = ft_strchr(str, c);
	while (s && *s && ft_strchr(s + 1, c))
		s = ft_strchr(s + 1, c);
	return (s);
}
