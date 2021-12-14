#include "../ft_mini_talk.h"

void handler(int sig)
{
	static char	c;
	static int	n;

	n++;
	c = c << 1 | (sig - SIGUSR1);
	if (n == 8)
	{
		ft_putchar(c);
		n = 0;
		c = 0;
	}
}
int main()
{
	printf("%d\n", getpid()); //get PID ID

	signal(SIGUSR1, &handler);
	signal(SIGUSR2, &handler);
	while (1);
	return 0;
}
