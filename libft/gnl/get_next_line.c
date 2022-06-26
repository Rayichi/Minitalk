/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:54:15 by yfrancoi          #+#    #+#             */
/*   Updated: 2022/03/22 15:54:15 by yfrancoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_buff(char *buff)
{
	int		i;
	char	*str;

	i = 0;
	while (buff && buff[i] != '\n' && buff[i] != 0)
		i++;
	if (buff && buff[i] && buff[i] == '\n')
		i++;
	if (!buff || buff[i] == 0)
	{
		free(buff);
		return (NULL);
	}
	str = malloc((ft_strlen(&buff[i]) + 1) * sizeof(char));
	if (!str)
	{
		free (buff);
		return (NULL);
	}
	str = ft_strcpy(&buff[i], str);
	free(buff);
	return (str);
}

char	*ft_read(char *buff, int fd)
{
	char	*tmp;
	int		n;

	tmp = malloc((42 + 1) * sizeof(char));
	if (!tmp)
		return (0);
	tmp[42] = 0;
	n = 1;
	while (!ft_strchr(buff, '\n') && n > 0)
	{
		n = read(fd, tmp, 42);
		if (n < 0)
		{
			free(tmp);
			return (NULL);
		}
		tmp[n] = '\0';
		buff = ft_strjoin(buff, tmp);
	}
	free(tmp);
	return (buff);
}

char	*get_next_line(int fd)
{
	static char	*buff[257];
	char		*line;

	
	line = NULL;
	if (fd > -1 && fd < 256)
	{
		buff[fd] = ft_read(buff[fd], fd);
		if (buff[fd] && buff[fd][0])
			line = ft_copy(buff[fd]);
		buff[fd] = ft_buff(buff[fd]);
	}
	return (line);
}
