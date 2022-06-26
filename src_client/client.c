#include "minitalk.h"

int	main(int ac, char **av)
{
	int i;

	if (ac != 3)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	i = ft_atoi(av[1]);
	ft_send(i, av[2]);
	return(0);
}