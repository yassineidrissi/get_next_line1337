/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:23:47 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/18 18:16:38 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define MAX_FD_SIZE INT_MAX

// # ifdef BUFFER_SIZE
# define BUFFER_SIZE 1

typedef struct s_get
{
	int		index;
	char	*next;
	char	*data;
	char	*output;
}t_get;

void	*ft_calloc(size_t count, size_t size);
char	*ft_strchr(char	*s, int c);
void	ft_bzero(void *s, size_t n);
char	*ft_strjoin(char *s1, char *s2, int alloc);
char	*ft_substr(char *s, unsigned int start, size_t len);
t_get	*daka_dyali(t_get *s);
char	*get_next_line(int fd);

#endif