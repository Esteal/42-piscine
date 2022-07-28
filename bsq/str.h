#ifndef STR_H
# define STR_H

unsigned long str_len(char *str);
void	print(char *str);
int	is_printable(char *str, unsigned long len);
unsigned int	find(char *src, char to_find);
unsigned int	extract_str_to_u(char *src);

#endif