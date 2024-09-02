/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:19:58 by rhiguita          #+#    #+#             */
/*   Updated: 2024/09/01 17:22:11 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_trim(char *s)
{
	char	*trim_word;
	int		i;
	
	if (!s || !s[0])
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	while (s[i] == '\n')
		i++;
	trim_word = malloc(i + 1);
	if (trim_word == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != '\n')
	{
		s[i] = trim_word[i];
		i++;
	}
	if (s[i] == '\n')
		trim_word[i++] = '\n';
	trim_word[i] = '\0';
	return (trim_word);
}

char	*ft_new_line(char *s)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	if (s[i] == '\0')
	{
		free(s);
		return (NULL);
	}
	line = malloc(ft_strlen(s) - i + 1);
	if (line == NULL)
		return (NULL);
	i++;
	j = 0;
	while (s[i])
		line[j++] = s[i++];
	line[j] = '\0';
	return (line);
}

char	*read_to_left_str(int fd, char *left_str)
{
	char	*buffer;
	int		n_bytes;

	n_bytes = 1;
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while(!(ft_strchr(left_str, '\n')) && n_bytes != 0)
	{
		n_bytes = read(fd, buffer, BUFFER_SIZE);
		if(n_bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		printf("soy el buffer %s\n", buffer);
		buffer[n_bytes] = '\0';
		left_str = ft_strjoin(left_str, buffer);
	}
	free(buffer);
	return (left_str);
}

char	*get_next_line(int fd)
{
	char	*line;
	static char	*left_str = 0;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	left_str = read_to_left_str(fd, left_str);
	if (left_str == NULL)
		return (NULL);
	line = ft_trim(left_str);
	left_str = ft_new_line(left_str);
	return (line);
}

int	main(void)
{
	int fd = open("archivo.txt", O_RDONLY);
	char	*l;

	if (fd == -1)
	{
		printf("Failed Reading\n");
		return (1);
	}
	while ((l = get_next_line(fd)) != NULL)
	{
		printf("Linea: %s\n", l);
	}
	close(fd);
	return (0);
}
