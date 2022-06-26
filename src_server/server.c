#include "minitalk.h"

int main(void)
{
	struct sigaction	sig;

	ft_printf("PID Server : %d\n", getpid());

	sig.sa_flags = SA_SIGINFO;
		sig.sa_sigaction = ft_receve;
	sigaction(SIGUSR1, &sig, NULL);
	sigaction(SIGUSR2, &sig, NULL);
	while (1)
		pause();
	return (0);
}