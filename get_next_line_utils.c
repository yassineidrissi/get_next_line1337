/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:19:58 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/16 17:14:10 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i++])
		;
	return (i);
}

char	*ft_strchr(const char	*s, int c)
{
	int		i;
	char	*s1;
	int		n;

	i = 0;
	s1 = (char *)s;
	n = ft_strlen(s1);
	while (i <= n)
	{
		if (s1[i] == (char)c)
		{
			return (&s1[i]);
		}
		i++;
	}
	return (0);
}

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*b;

	b = (unsigned char *)s;
	i = -1;
	while (++i < n)
		b[i] = 0;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	result = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!result)
		return (NULL);
	while (s1[j])
		result[i++] = s1[j++];
	j = 0;
	while (s2[j])
		result[i++] = s2[j++];
	result[i] = 0;
	return (result);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (len < 0 || ft_strlen((char *)s) < (int)start)
		result = malloc(sizeof(*s));
	else if (ft_strlen((char *)s) + len < start)
		result = malloc((ft_strlen((char *)s) - start + 1) * sizeof(*s));
	else
		result = malloc((len + 1) * sizeof(*s));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			result[j++] = s[i];
		i++;
	}
	result[j] = 0;
	return (result);
}

t_get	*daka_dyali(t_get *s)
{
	int i;

	i = 0;
	while(*(s->data + i) != '\n')
		i++;
	s->index = i;
	*(s->data + i) = '\0';
	s->next = &(s->data[i + 1]);
	return (s);
}

void	*ft_calloc(size_t count, size_t size)
{
	char *p;
	p = malloc(count * size);
	ft_bzero(p, count * size);
	return (p);
}