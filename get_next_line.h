/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:20:42 by rhiguita          #+#    #+#             */
/*   Updated: 2024/09/26 21:29:36 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE 
#  define BUFFER_SIZE 1
# endif

char	*ft_trim(char *s);
char	*ft_new_line(char *s);
char	*read_to_left_str(int fd, char *left_str[fd]);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strchr(char *s, char c);

#endif
