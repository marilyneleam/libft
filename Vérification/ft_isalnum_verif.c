#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	int c;
	c = 'c';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	c = 'A';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	c = '9';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	c = '+';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	c = 51;
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	c = 62;
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	c = 87;
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	return (0);
}
