#ifndef MAP_H
# define MAP_H

# define OBSTACLES_SIZE 20

#include "utils.h"

typedef struct s_point
{
	unsigned int	x;
	unsigned int	y;
} t_point;

typedef struct s_chars
{
	char	empty;
	char	obstacle;
	char	full;
} t_chars;


typedef struct s_map{
	t_chain			*obstacle;
	t_point			size;
	unsigned long	obstacle_count;
	t_chars			chars;
} t_map;

t_map	*free_map(t_map *map);

#endif
