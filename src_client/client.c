#include "minitalk.h"

void	ft_send_char(char c, int pid)
{
	int i;
	int n;
	int tim;

	i = 0;
	tim = 500;
	while (i < 8)
	{
		n = ft_pow(2, 7 - i);
		if (c / n)
		{
			c = (int) c % n;
			kill(pid, SIGUSR2);
		}
		else 
		{
			kill(pid, SIGUSR1);
		}
		i++;
		usleep(tim + 100);
	}
	kill(pid, SIGUSR1);
	usleep(tim);
}

void ft_send(int pid, char *str)
{
	while(str && *str)
	{
		ft_send_char((int) *str, pid);
		str++;
	}
	ft_send_char((int) '\n', pid);
}

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