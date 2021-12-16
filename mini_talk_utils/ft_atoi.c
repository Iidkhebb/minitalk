/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 03:25:37 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/12/16 03:25:38 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_mini_talk.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	r;

	i = 0;
	sign = 1;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign = -sign;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		r = (str[i] - 48) + (r * 10);
		i++;
	}
	return (r * sign);
}
