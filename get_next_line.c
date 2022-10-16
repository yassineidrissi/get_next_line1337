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


	j = 0;
	buffer = NULL;
	line = malloc(sizeof(t_get));
	line->data = malloc(BUFFER_SIZE + 1);
	if (fd < 0 || fd >= MAX_FD_SIZE)
		return NULL;
	// printf("the line now is %s\n",line);
	while(!ft_strchr(buffer,'\n') && !j && read(fd, line->data, BUFFER_SIZE))
	{
		// printf("the buffer now is %s\n",buffer);
		if (ft_strchr(line->data,'\n'))
		{
			line = daka_dyali(line);
			line->output = ft_strjoin(buffer, line->data, 0);
			buffer = ft_strjoin(line->next,NULL, 0);
			j = 1;
		}
		else
		{
			buffer = ft_strjoin(buffer, line->data, 0);
		}		
	}
	free(line);
	return (line->output);
}