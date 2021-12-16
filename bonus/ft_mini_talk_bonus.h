#ifndef FT_MINI_TALK_BONUS_H
#define FT_MINI_TALK_BONUS_H

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

# include <stdio.h>

void	ft_putchar(char c);
int		ft_atoi(const char *str);
void	ft_putstr(char *str);
void	send_bin(int c, int pid);
void	ft_putnbr(int i, int nbr, char *base);
void ft_is_received(int pid);
#endif

