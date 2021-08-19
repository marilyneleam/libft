#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c);

int	main(void)
{
	int c;
	c = 'a';
	printf("%d\n", ft_toupper(c));
	printf("%d\n", toupper(c));
	c = 'e';
	printf("%d\n", ft_toupper(c));
	printf("%d\n", toupper(c));
	c = 'z';
	printf("%d\n", ft_toupper(c));
	printf("%d\n", toupper(c));
	c = 'B';
	printf("%d\n", ft_toupper(c));
	printf("%d\n", toupper(c));
	c = '+';
	printf("%d\n", ft_toupper(c));
	printf("%d\n", toupper(c));
	c = 109;
	printf("%d\n", ft_toupper(c));
	printf("%d\n", toupper(c));
	c = 115;
	printf("%d\n", ft_toupper(c));
	printf("%d\n", toupper(c));
	c = '_';
	printf("%d\n", ft_toupper(c));
	printf("%d\n", toupper(c));

}
