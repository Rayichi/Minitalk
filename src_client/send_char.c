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