#include "map.h"
#include <stdlib.h>

t_map	*free_map(t_map *map)
{
	free(map->obstacle);
}
