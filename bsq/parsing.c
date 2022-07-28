#include "file.h"
#include "map.h"
#include "str.h"
#include "utils.h"
#include "parsing.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	rd_line(int fd, char *buf, unsigned int buf_size)
{
	unsigned long	rd_ret;

	rd_ret = read(fd, buf, buf_size);
	if (buf[buf_size - 1] != '\n')
		return (0);
	return (rd_ret);
}

int	rd_first_line(int fd, t_map *out_map)
{
	char			*buf;
	unsigned int	buf_size;

	buf_size = 5;
	buf = malloc(sizeof(char) * buf_size);
	if (rd_line(fd, buf, buf_size) != 0 && is_printable(buf, buf_size))
	{
		if (!safe_malloc(out_map, sizeof(t_map)))
			return (0);
		out_map->size.y = buf[0] - '0';
		out_map->chars.empty = buf[1];
		out_map->chars.obstacle = buf[2];
		out_map->chars.full = buf[3];
		return (1);
	}
	return (0);
}

int	rd_map_line(int fd, t_map *out_map)
{

}

int	parse_file(char *path, t_map *map)
{
	int				fd;
	char			*buf;
	unsigned long	rd_ret;

	rd_ret = 1;
	if (open(&fd, O_RDONLY) == -1 && !rd_first_line(fd, map))
		return (0);

}