#ifndef CHAIN_H
# define CHAIN_H

# define CHAIN_BLOCK_SIZE 50

typedef struct s_chain
{
	char			block[CHAIN_BLOCK_SIZE];
	unsigned int	count;
	t_chain			*next;
} t_chain;
void	free_chain(t_chain *chain);

#endif