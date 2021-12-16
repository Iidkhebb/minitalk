#include "../ft_mini_talk_bonus.h"

int main(int ac, char const *av[])
{
	int pid;
	int index;

	signal(SIGUSR1, &ft_is_received);
	if (ac != 3)
		return(ft_putstr("ARGS ERROR\n"), 1);
	else
	{
		index = 0;
		pid = ft_atoi(av[1]);
		 // for confirmation
		while(av[2][index])
		{
			send_bin(av[2][index], pid);
			index++;
		}
		if (av[2][index] == '\0')
		{
			send_bin(av[2][index], pid);
			sleep(1);
		}
	}
	return 0;
}
