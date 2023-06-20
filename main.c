#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;
	char	*line2;
	char	*line3;

	fd = 100;
	line = get_next_line(fd);
	line2 = get_next_line(fd);
	line3 = get_next_line(fd);
	printf("%s", line);
	printf("%s", line2);
	printf("%s", line3);
	free(line);
	free(line2);
	free(line3);
	return (0);
}