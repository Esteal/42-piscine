#include <unistd.h>

unsigned long str_len(char *str)
{
	unsigned long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
void	print(char *str)
{
	write(1, str, str_len(str));
}

int	is_printable(char *str, unsigned long len)
{
	while (len > 1)
	{
		if (str[len - 1] < 32 || str[len - 1] > 127)
			return (0);
		len--;
	}
	return (1);
}

unsigned int	find(char *src, char to_find)
{

}

int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

unsigned int	extract_str_to_u(char *src)
{
	unsigned int	ret;

	ret = 0;
	while (is_num(*src))
	{
		ret *= 10;
		ret += *src - '0';
		src++;
	}
	return (ret);
}
