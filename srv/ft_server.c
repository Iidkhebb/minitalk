/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 03:16:44 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/12/16 03:24:19 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_mini_talk.h"

int	g_pid = 0;

static void	handler(int sig, siginfo_t *info, void *context)
{
	static char	c;
	static int	n;

	(void) context;
	if (g_pid != info->si_pid)
	{
		c = 0;
		n = 0;
		g_pid = info->si_pid;
	}
	n++;
	c = c << 1 | (sig - SIGUSR1);
	if (n == 8)
	{
		if (c == '\0')
		{
			kill(info->si_pid, SIGUSR1);
		}
		ft_putchar(c);
		n = 0;
		c = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = &handler;
	sa.sa_flags = SA_SIGINFO;
	ft_putstr("YOUR PID IS : ");
	ft_putnbr(10, getpid(), "0123456789");
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_putchar('\n');
	while (1)
	{
	}
	return (0);
}
