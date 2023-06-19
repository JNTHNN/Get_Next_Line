#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;
	char	*line2;

	fd = open("ok.txt", O_RDONLY);
	line = get_next_line(fd);
	line2 = get_next_line(fd);
	printf("%s%s", line, line2);
	free(line);
	free(line2);
	return (0);
}