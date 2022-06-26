#include "libft.h"

long	ft_pow(int n, int x)
{
	int	nb;

	nb = 1;
	while (x--)
		nb *= n;
	return (nb);
}