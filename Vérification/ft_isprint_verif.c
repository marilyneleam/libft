#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c);

int	main(void)
{
	int c;
	c = ' ';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	c = '~';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	c = 'a';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	c = 'B';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	c = '9';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	c = 9;
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	c = 177;
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));












}
