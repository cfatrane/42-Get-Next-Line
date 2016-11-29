/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 10:48:55 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/28 19:05:31 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *line;
	int fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		get_next_line(fd, &line);
		printf("line 1 = %s\n\n" ,line);
		printf("yoloswag\n\n");
		get_next_line(fd, &line);
		printf("line 2 = %s\n" ,line);
		printf("yoloswag\n\n");
		get_next_line(fd, &line);
		printf("line 3 = %s\n" ,line);
	}
//	ft_putendl(line);
	return (0);
}
