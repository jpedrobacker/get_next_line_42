#include "get_next_line.h"

int main(void)
{
	int		fd;
	char	*str;
	char	*path;
	int		i;

	path = "text.txt";
	fd = open(path, O_RDONLY);
	i = 0;
	str = get_next_line(fd);
	printf("fd: %i, %s\n", fd, str);
	close(fd);
	return (0);
}
