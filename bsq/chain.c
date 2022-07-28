#include "chain.h"

void	free_chain(t_chain *chain)
{
	if (chain->next)
		free_chain(chain->next);
	else
		free(chain);
}

// If found return the link otherwise return the last link
t_chain	*find_link(t_chain *chain, unsigned long index)
{
	t_chain	*ptr;

	ptr = chain;
	while ((index + 1) > CHAIN_BLOCK_SIZE && ptr->next)
	{
		ptr = ptr->next;
		index -= CHAIN_BLOCK_SIZE;
	}
	return (ptr);
}

char	*find_chain(t_chain *chain, unsigned long index, char *out_finding)
{
	const t_chain	*ptr;

	ptr = find_link(chain, index);
	if ((index + 1) <= ptr->count)
	{
		out_finding = ptr->block[((index + 1) % CHAIN_BLOCK_SIZE) - 1];
		return (out_finding);
	}
	else
	{
		out_finding = ptr->block[ptr->count - 1];
		return (0);
	}
}

void	write_chain(t_chain *chain, unsigned long index, char c)
{
	const t_chain	*ptr;

	ptr = find_link(chain, index);
	if (ptr)
	{
		if (ptr->count)
	}
}
