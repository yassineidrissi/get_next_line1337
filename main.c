/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:58:52 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/15 23:46:23 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main()
{
	int i = 4;
	char *s;
	int fd = open("test.txt", O_RDWR);
	s = malloc(5);
	printf("%s", get_next_line(fd));
	close(fd);
}