#include "minitalk.h"

void	ft_receve(int sg, siginfo_t *sig, void *oact )
{
	static int i;
	static char c;

	(void) oact;
	(void) sig;
	
	if (i > 7)
	{
		ft_printf("%c", c);
		i = 0;
		c = 0;
	}
	else 
	{
		if (sg == SIGUSR2)
			c += ft_pow(2, 7 - i);
		i++;
	}
	usleep(500);
}