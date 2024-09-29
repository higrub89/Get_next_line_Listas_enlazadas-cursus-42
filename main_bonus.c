#include "get_next_line_bonus.h"

int main(void)
{
	int fd1 = open("a1.txt", O_RDONLY);
	int fd2 = open("a2.txt", O_RDONLY);
	int fd3 = open("a3.txt", O_RDONLY);
	char	*line;

	if ( fd1 == -1 || fd2 == -1 || fd3 == -1)
	{
		printf("MALA LECTURA");
		return (1);
	}

	printf("Lectura de archivo1: \n");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);

	
	printf("Lectura de archivo2: \n");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);


	printf("Lectura de archivo3: \n");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);

	printf("Lectura de archivo1: \n");
	line = get_next_line(fd1);
	printf("%s", line);
	free(line);

	
	printf("Lectura de archivo2: \n");
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);


	printf("Lectura de archivo3: \n");
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);

	return (0);
}
