#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	file_open(int *out_fd, char *path)
{
	*out_fd = open(path, O_RDONLY);
}

