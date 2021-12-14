#ifndef FT_MINI_TALK_H
#define FT_MINI_TALK_H

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

# include <stdio.h>

void ft_putchar(char c);
int	ft_atoi(const char *str);
void ft_putstr(char *str);
void send_bin(int c, int pid);

#endif

