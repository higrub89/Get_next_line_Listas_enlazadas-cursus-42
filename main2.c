#include "get_next_line.h"

int main(void)
{
	char	*s = "Hola\ncomo";
	//char	*n = "";
	char	*exam = ft_new_line(s);

	printf("%s\n", exam);

	size_t l = ft_strlen(exam);
	printf("%zu\n", l);
	free(exam);
	return(0);
}
