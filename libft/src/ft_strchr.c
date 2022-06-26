/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:00:51 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/06 13:00:51 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	while ((unsigned char)*str && (unsigned char)*str != (unsigned char)c)
		str++;
	if ((unsigned char)*str != (unsigned char)c)
		return (NULL);
	return (str);
}
