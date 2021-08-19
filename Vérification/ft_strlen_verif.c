#include <unistd.h>

int	ft_strlen(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long l;

	l = nb;
	if (l < 0)
	{
		ft_putchar('-');
		l = -l;
	}
	if (l  >= 10)
	{
		ft_putnbr(l / 10);
		ft_putnbr(l % 10);
	}
	else
	{
		ft_putchar(l + '0');
	}
}

int 	main(void)
{
	char toto[ ] = "totododobobo";
	ft_putnbr(ft_strlen(toto));
	return (0);
}
