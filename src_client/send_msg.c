#include "minitalk.h"

void ft_send(int pid, char *str)
{
	while(str && *str)
	{
		ft_send_char((int) *str, pid);
		str++;
	}
	ft_send_char((int) '\n', pid);
}