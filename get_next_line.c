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
	t_get 		*line;
	char		*tmp;
	int 		j;

	buffer = NULL;
	line->data = ft_calloc(BUFFER_SIZE + 1, 1);
	if (fd < 0 || fd >= MAX_FD_SIZE)
		return NULL;
	// printf("the line now is %s\n",line);
	while(read(fd, line->data, BUFFER_SIZE))
	{
		// printf("the buffer now is %s\n",buffer);
		if (ft_strchr(line->data,'\n'))
		{
			line->next = daka_dyali(line);
			line->output = ft_strjoin(buffer, line->data);
			buffer = tmp;
		}
		else
		{
			tmp = buffer;
			buffer = ft_strjoin(buffer, line->data);
			// ft_bzero(tmp, BUFFER_SIZE);
			free(tmp);
			free(line->data);
		}		
	}
	return (line->output);
}