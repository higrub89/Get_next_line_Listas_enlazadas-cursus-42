/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:21:19 by rhiguita          #+#    #+#             */
/*   Updated: 2024/09/22 14:12:10 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char	*line;

	fd = open("archivos.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("FAILED READING");
		return (1);
	}
	//if (get_next_line(fd) == NULL)
	//{
	//	printf("null");
	//}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
