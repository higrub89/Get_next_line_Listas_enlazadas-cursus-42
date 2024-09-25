#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char    *ft_trim(char *s);
char    *ft_new_line(char *s);
char    *read_to_left_str(int fd, char *left_str);
char    *get_next_line(int fd);
char    *ft_strjoin(char *s1, char *s2);
size_t  ft_strlen(char *s);
void    *ft_memcpy(void *dest, const void *src, size_t n);
char    *ft_strchr(char *s, char c);

#endif
