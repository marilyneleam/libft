#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c);

int	main(void)
{
	int c;
	c = 'a';
	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c));
	c = 'e';
	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c));
	c = 'z';
	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c));
	c = 'B';
	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c));
	c = '+';
	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c));
	c = 109;
	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c));
	c = 115;
	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c));
	c = '_';
	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c));
	c = 31;
	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c));
	c = 255;
	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c));
}
