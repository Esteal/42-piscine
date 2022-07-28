#include "parsing.h"
#include "str.h"

int main(int argc, char const *argv[])
{
	unsigned int	i;

	i = 1;
	while (i < argc)
	{
		if (!parse_file(argv[i]))
			print("map error\n");
	}
	return 0;
}
