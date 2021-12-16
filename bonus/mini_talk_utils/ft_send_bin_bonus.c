#include "../ft_mini_talk_bonus.h"

void send_bin(int c, int pid)
{
	int i;
	char x;

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
