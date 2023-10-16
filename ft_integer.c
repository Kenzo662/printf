#include "printf.h"

static int	ft_countnb(int c)
{
	int	count;

	count = 0;
	if (c < 0)
	{
		count++;
		c = c * -1;
	}
	while (c / 10 > 0)
	{
		c = c / 10;
		count++;
	}
    count++;
	return (count);
}
static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_integer(int nb)
{
    int count;

    count = ft_countnb(nb);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb > 9)
	{
		ft_integer(nb / 10);
		ft_integer(nb % 10);
	}
	else
		ft_putchar(nb + '0');
    return (count);
}

