#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>

/*int	main(void)
{
		int	next_read_error;
		char *name = "aaaaaa\nbbbbbb\ncccccc\nddddddd\n\n";
		int fd = open(name, O_RDONLY);
		printf("%d\n", fd);
		// set the next read call to return -1
		next_read_error = 1;
		if (BUFFER_SIZE > 100) 
		{
			char *temp;
			do {
				temp = get_next_line(fd);
				free(temp);
			} while (temp != NULL);
		}
		next_read_error = 0;
		close(fd);
		fd = open(name, O_RDONLY);
		printf("%d", fd);
		if (fd == -1) {
        perror("Error reading file");
		close(fd);
		}
		if (fd != 1) {
			printf("%s", "\nProbable reason" ": You should clear the static buffer when a call to read returns -1\n");
}

 
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
*/

int	main(void)
{
	int	fd;
	char	*line;
	
	fd = open("ok.txt", O_RDONLY);
	while(1)
	{
		line = get_next_line(fd);
		printf("%d \n%s", fd, line);	
		if (line == NULL)
		{
			printf("%d \n%s", fd, line);	
			break;
		}
		printf("%s", line);
		free(line);
	}
	close(fd);
}