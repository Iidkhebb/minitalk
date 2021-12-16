#include "../ft_mini_talk_bonus.h"

void	ft_putnbr(int i, int nbr, char *base)
{
	if (nbr < -2147483647)
	{
		 write(1, "-2147483648", 11);
		return ;
	}
	else if (nbr < 0 && nbr > -2147483648)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr >= i)
	{
		ft_putnbr(i, nbr / i, base);
		ft_putnbr(i, nbr % i, base);
	}
	else
		write(1, base + nbr, 1);
}
