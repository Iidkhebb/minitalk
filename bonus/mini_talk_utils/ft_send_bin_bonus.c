/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_bin_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 03:30:11 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/12/16 03:30:51 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_mini_talk_bonus.h"

void	send_bin(int c, int pid)
{
	int		i;
	char	x;

	i = 7;
	while (i >= 0)
	{
		usleep(500);
		x = c >> i-- & 1;
		if (x == 0)
			kill(pid, SIGUSR1);
		else if (x == 1)
			kill(pid, SIGUSR2);
	}
}
