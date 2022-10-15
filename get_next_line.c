/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:19:43 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/15 19:29:57yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char *buffer;
	char 		*line;
	char		*tmp;
	if (fd < 0 || fd >= MAX_FD_SIZE)
		return NULL;
	while(!ft_strchr(buffer, '\n') && read(fd, line, BUFFER_SIZE))
	{
		if (!ft_strchr(line,'\n'))
		{

			tmp = daka_dyali(line);
			line = ft_strjoin(buffer, line);
			buffer = tmp;
		}
		else
		{
			tmp = buffer;
			buffer = ft_strjoin(buffer, line);
			free(tmp);
			ft_bzero(line, BUFFER_SIZE);
			free(line);
		}		
	}
	return (line);
}