/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:19:58 by rhiguita          #+#    #+#             */
/*   Updated: 2024/08/01 18:14:55 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
	
#define BUFFER_SIZE 12 

char	*get_next_line(int fd)
{
	char	*read_bytes;
	int		n_bytes;
	static char	*line;

	read_bytes = ft_calloc(BUFFER_SIZE + 1, 1);
	n_bytes	= 1;
	while (n_bytes > 0)
	{
		n_bytes = read(fd, read_bytes, BUFFER_SIZE);
		printf("\neste es le primer bucle\n");
		line = ft_substr(read_bytes, 0, BUFFER_SIZE);
		printf("%s", line);
	}
	free(read_bytes);
	return (NULL);
}

int	main(void)
{
	int	fd = open("archivo.txt", O_RDONLY);

	get_next_line(fd);
	return (0);
}
