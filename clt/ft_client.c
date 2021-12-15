#include "../ft_mini_talk.h"

int main(int ac, char const *av[])
{
	int pid;
	int index;

	if (ac != 3)
		return(ft_putstr("ARGS ERROR\n"), 1);
	else
	{
		index = 0;
		pid = ft_atoi(av[1]);
		while(av[2][index])
		{
			send_bin(av[2][index], pid);
			index++;
		}
	}
	return 0;
}
