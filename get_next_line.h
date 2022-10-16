/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:23:47 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/16 17:12:48 by yaidriss         ###   ########.fr       */
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

# define MAX_FD_SIZE 1024
# define BUFFER_SIZE 5

typedef struct s_get
{
	int		index;
	char	*next;
	char	*data;
	char	*output;
}t_get;

void	*ft_calloc(size_t count, size_t size);
char	*ft_strchr(const char	*s, int c);
void	ft_bzero(void *s, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
t_get	*daka_dyali(t_get *s);
char	*get_next_line(int fd);

#endif