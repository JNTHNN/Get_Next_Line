#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("ok.txt", O_RDONLY);
	while (fd)
	{
		line = get_next_line(fd);
//		if (ft_check(line) == 1)
//		break;
		printf("%s", line);
		free(line);
	}
	return (0);
}