/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:12:11 by rhiguita          #+#    #+#             */
/*   Updated: 2024/09/01 16:43:15 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return(0);
	while(s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, char c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while(s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		else
			i++;
	}
	if (c == '\0')
		return (&s[i]);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = 0;
	}
	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	ft_memcpy(s3, s1, len_s1);
	ft_memcpy(s3 + len_s1, s2, len_s2);
	s3[len_s1 + len_s2] = '\0';
	return (s3);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}
