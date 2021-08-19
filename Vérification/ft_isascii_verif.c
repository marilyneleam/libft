#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	int c;
	c = 139;
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
	c = 'a';
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
	c = '+';
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
}
