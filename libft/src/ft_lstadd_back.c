/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:53:02 by yfrancoi          #+#    #+#             */
/*   Updated: 2021/11/18 16:53:02 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{	
	t_list	*last;

	last = NULL;
	if (!*alst)
		*alst = new;
	else if (new)
	{
		last = ft_lstlast(*alst);
		last->next = new;
	}
}
