#include "push_swap.h"
#include "list.h"

void	print_parsed(t_lst *chain)
{
	printf("%s %-20s %s\n", "============", "Print Parsed", "============");
	printf("%s %-20s %s\n", "============", "chain", "============");
	ft_lstprintnb(chain);
}
