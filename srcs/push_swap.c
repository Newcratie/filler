#include "push_swap.h"
#include "get_next_line.h"

int	main(int ac, char **av)
{
	t_lst	*a;

	if (!(a = chain_parser(ac, av)))
	{
		ft_printf("Wrong number of argument\n");
		return(0);
	}
	ft_putendl("sa");
	return(0);
}
