/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_talk_bonus.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 03:31:29 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/12/16 03:34:28 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINI_TALK_BONUS_H
# define FT_MINI_TALK_BONUS_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

# include <stdio.h>

void	ft_putchar(char c);
int		ft_atoi(const char *str);
void	ft_putstr(char *str);
void	send_bin(int c, int pid);
void	ft_putnbr(int i, int nbr, char *base);
void	ft_is_received(int pid);
#endif
