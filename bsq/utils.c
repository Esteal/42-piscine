#include "stdlib.h"

void	*safe_malloc(void *out_obj, unsigned int size)
{
	out_obj = malloc(size);
	return (out_obj);
}

