#ifndef _MINITALK_H_
# define _MINITALK_H_

#include "../libft/includes/libft.h"
#include <signal.h>

void ft_send(int pid, char *str);
void	ft_send_char(char c, int pid);
void	ft_receve(int sg, siginfo_t *sig, void *oact );

#endif